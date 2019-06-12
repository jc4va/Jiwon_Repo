	;; threeplusone.s
	;; Name: Jiwon Cha
	;; ID: jc4va
	;; Date: 11/13/17
	;; Filename: threexplusone.s

	;; List of optimizations:
	;; 1. I wrote my routine with few x86 instructions
	;; 2. I used lea instruction for multiplication and did
	;;    x+2x+1 instead of 3x+1 (shifting)
	;; 3. Did not use loops
	;; 4. Only used rax and rdi
	;; 5. Did not use base pointer
	;; 6. Did not use imul or div 

	global threexplusone

	section .text

threexplusone:
	xor	rax, rax

start:
	mov	rax, 0
	cmp	rdi, 1
	je	done
	test	rdi, 1
	jnz	is_odd
is_even:	
	shr	rdi, 1
	call	threexplusone
	inc	rax
	ret
is_odd:	
	lea	rdi, [rdi+2*rdi+1]
	call	threexplusone
	inc	rax
	ret
done:
	ret
