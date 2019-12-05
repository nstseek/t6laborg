
.text				# Add what follows to the text segment of the program
	.globl	main		# Declare the label main to be a global one
main:
	addu	$t0, $zero, $zero
	addu	$t1, $zero, $zero
	addu	$t2, $zero, $zero
	la	$t3, real_clock
	addu	$t4, $zero, $zero
	addiu	$t5, $zero, 9
	la	$t6, ins_limit
	lw	$t6, 0($t6)
somdec:	nop
	addiu	$t4, $t4, 1
	beq	$t4, $t6, alguma_coisa
algo:	
	
	

.data

real_clock:	.word	0x0
ins_limit:	.word 	0x001312D0