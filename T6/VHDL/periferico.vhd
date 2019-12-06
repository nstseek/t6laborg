--++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
-- registrador de 4 bits 
--++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
library IEEE;
use IEEE.std_logic_1164.all;

entity reg_quatro_bits is
           generic( INIT_VALUE : STD_LOGIC_VECTOR(3 downto 0) := (others=>'0') );
           port(  ck, rst, ce : in std_logic;
                   D : in  STD_LOGIC_VECTOR (3 downto 0);
                   Q : out STD_LOGIC_VECTOR (3 downto 0)
               );
end reg_quatro_bits;

architecture reg of reg_quatro_bits is 
begin

  process(ck, rst)
  begin
       if rst = '1' then
              Q <= INIT_VALUE(3 downto 0);
       elsif ck'event and ck = '0' then
           if ce = '1' then
              Q <= D; 
           end if;
       end if;
  end process;
        
end reg;


--####################################
--	Modulo do periferico
--####################################


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity periferico is
	port(
		address: in STD_LOGIC_VECTOR(31 downto 0);
		data: in STD_LOGIC_VECTOR(3 downto 0);
		ce, ck, rst, rw: in STD_LOGIC;
		an: out STD_LOGIC_VECTOR(3 downto 0);
		dec_ddp: out STD_LOGIC_VECTOR(7 downto 0)
	);
end periferico;

architecture Behavioral of periferico is
	type enderecos is array(0 to 3) of STD_LOGIC_VECTOR(31 downto 0);
	type regs_type is array(0 to 3) of STD_LOGIC_VECTOR(3 downto 0);
	type dsp_type is array(0 to 3) of std_logic_vector(5 downto 0);
	
	signal regs: regs_type;
	signal wen: STD_LOGIC_VECTOR(3 downto 0);
	signal addresses: enderecos := (x"10008000", x"10008001", x"10008002", x"10008003");
	signal dsp: dsp_type;

begin

	registers: for i in 0 to 3 generate   
	  wen(i) <= '1' when addresses(i)=address and ce='1' and rw='0' else '0';
	  regs_periferico: entity work.reg_quatro_bits port map(ck => ck, rst => rst, ce => wen(i), D => data, Q => regs(i));                    
	end generate registers;   
	
	dsp(0) <= '1' & regs(0) & '1';
	dsp(1) <= '1' & regs(1) & '1';
	dsp(2) <= '1' & regs(2) & '1';
	dsp(3) <= '1' & regs(3) & '1';

	display: entity work.dspl_drv port map(
		clock => ck,
		reset => rst, 
		d1 => dsp(0),
		d2 => dsp(1),
		d3 => dsp(2),
		d4 => dsp(3),
		an => an,
		dec_ddp => dec_ddp
	);
end Behavioral;