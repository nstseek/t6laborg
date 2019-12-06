
.text				# Add what follows to the text segment of the program
	.globl	main		# Declare the label main to be a global one
	
main:	addu	$t0, $zero, $zero	# $t0 guarda os clocks ja consumidos nas instrucoes - 4 clocks
	addu	$t1, $zero, $zero	# $t1 guarda o float do numero - 4 clocks
	addu	$t2, $zero, $zero	# $t2 guarda unidade de seg - 4 clocks
	addu	$t3, $zero, $zero	# $t3 guarda casa dos dezenas - 4 clocks
	addu	$t4, $zero, $zero	# $t4 guarda casa das centenas - 4 clocks
	la	$t5, out_dec_s		# $t5 guarda address pra salvar o float - 4 clocks
	lw	$t5, 0($t5)		# - 5 clocks
	la	$t6, out_un		# $t6 guarda address pra salvar unidade de seg - 4 clocks
	lw	$t6, 0($t6)		# - 5 clocks
	la	$t7, out_dz		# $t7 guarda address pra salvar casa das dezenas - 4 clocks
	lw	$t7, 0($t7)		# - 5 clocks
	la	$s0, out_ct		# $s0 guarda address pra salvar casa das centenas - 4 clocks
	lw	$s0, 0($s0)		# - 5 clocks
	la	$s1, ins_limit 		# $s1 guarda valor pra comparacao de clocks (1.250.000) - 4 clocks
	lw	$s1, 0($s1)		# - 5 clocks
	addiu	$s2, $zero, 9	 	# $s2 guarda o 9 pra comparacao de max de cada casa - 4 clocks
	la	$s3, dummy_slot		# adiciona 4 clocks e bota um address inutil - 4 clocks
	lw	$zero, 0($s3)		# - 5 clocks
	lw	$zero, 0($s3)		# - 5 clocks
	lw	$zero, 0($s3)		# - 5 clocks
	nop				# adiciona 4 clocks - 4 clocks
	addiu	$t0, $t0, 96 		# adiciona os clocks passados com a conclusao dessa instrucao no counter - 4 clocks
					# 78 clocks no total (4x14)+(5x8)
somins:	beq	$t0, $s1, somflt	# verifica se as instrucoes atingiram o limite - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	addiu	$t0, $t0, 16		# soma no contador de instrucoes as instrucoes ate agr + a proxima de jump - 4 clocks
	j 	somins			# volta pro loop - 4 clocks
					# 16 clocks no total com beq = false
somflt:	beq	$t1, $s2, somuni	# verifica se o float esta em 9 - 4 clocks
	addiu	$t1, $t1, 1		# soma 1 ao contador de float - 4 clocks
	sb	$t1, 0($t5)		# salva na memoria o valor atual de float - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	addiu	$t0, $zero, 32		# zera e soma os clocks passados contando com o prox jump ja - 4 clocks
	j	somins			# volta pro somins pra contar instrucoes - 4 clocks
					# 32 clocks no total com beq = false e considerando o beq do somins
somuni:	beq	$t2, $s2, somdez	# verifica se a casa das unidades chegou em 9 - 4 clocks
	addiu	$t2, $t2, 1		# adiciona 1 a casa das unidades - 4 clocks
	sb	$t2, 0($t6)		# salva o valor das unidades na memoria - 4 clocks
	addu	$t1, $zero, $zero	# zera o contador de float - 4 clocks
	sb	$t1, 0($t5)		# salva nos reg o valor atual de float - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	addiu	$t0, $zero, 48		# soma os clocks passados com o jump a seguir - 4 clocks
	j	somins			# pula para o somins - 4 clocks
					# 48 clocks no total com beq = false e com os beqs anteriores
somdez:	beq	$t3, $s2, somcen	# verifica se a casa das dezenas atingiu 9 - 4 clocks
	addiu	$t3, $t3, 1		# soma 1 a casa das dezenas - 4 clocks
	sb	$t3, 0($t7)		# salva na memoria o valor das dezenas - 4 clocks
	addu	$t1, $zero, $zero	# zera o contador de float - 4 clocks
	sb	$t1, 0($t5)		# salva na memoria o valor do float - 4 clocks
	addu 	$t2, $zero, $zero	# zera o contador de unidades - 4 clocks
	sb	$t2, 0($t6)		# salva na memoria o valor das unidades - 4 clocks
	addiu	$t0, $zero, 48		# zera e salva os clocks passados contando com o prox jump - 4 clocks
	j	somins			# volta para o somins - 4 clocks
					# 48 clocks no total com beq = false e contando com os beqs passados
somcen:	beq	$t4, $s2, somcen	# verifica se a casa das centenas chegou em 9 - 4 clocks
	addiu	$t4, $t4, 1		# soma 1 a casa das centenas - 4 clocks
	sb	$t4, 0($s0)		# salva na memoria o valor da casa das centenas - 4 clocks
	addu	$t1, $zero, $zero	# zera o contador de float - 4 clocks
	sb	$t1, 0($t5)		# salva na memoria o valor do float - 4 clocks
	addu 	$t2, $zero, $zero	# zera o contador de unidades - 4 clocks
	sb	$t2, 0($t6)		# salva na memoria o valor das unidades - 4 clocks
	addu 	$t3, $zero, $zero	# zera o contador de dezenas - 4 clocks
	sb	$t3, 0($t7)		# salva na memoria o valor das dezenas - 4 clocks
	nop				# adiciona 4 clocks - 4 clocks
	addiu	$t0, $zero, 64		# zera e salva os clocks passados ate agora contando com o prox jump - 4 clocks
	j	somins			# salta pro somins - 4 clocks
					# 64 clocks passados ate agora com beq = false e contando todos os beqs - 4 clocks
	
.data

ins_limit:	.word	0x001312D0
out_dec_s:	.word  	0x10008000
out_un:      	.word  	0x10008001
out_dz:      	.word  	0x10008002
out_ct:      	.word  	0x10008003
dummy_slot:	.word	0x0
