	;; Name: Jiwon Cha
	;; ID: jc4va
	;; File: mathlib.s
	;; Date: 10/30/17

	global _product
	global _power

	section .text

_product:
	xor 	rax, rax
	xor 	r10, r10

pstart:
	cmp 	r10, rsi
	je 	pdone
	add 	rax, rdi
	inc 	r10
	jmp	pstart
	
pdone:
	ret

_power:
	xor	rax, rax

powstart:
	mov	rax, 1
	cmp	rdi, 1
	je	powdone
	cmp 	rsi, 0
	je	powdone
	dec	rsi
	call	_power
	mov 	rsi, rax
	call	_product

powdone:
	ret
