	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	__Z11passByValueii
	.p2align	4, 0x90
__Z11passByValueii:                     ## @_Z11passByValueii
	.cfi_startproc
## BB#0:
	mov	dword ptr [rsp - 4], edi
	mov	dword ptr [rsp - 8], esi
	mov	esi, dword ptr [rsp - 4]
	add	esi, dword ptr [rsp - 8]
	mov	eax, esi
	ret
	.cfi_endproc

	.globl	__Z15passByReferenceRiS_
	.p2align	4, 0x90
__Z15passByReferenceRiS_:               ## @_Z15passByReferenceRiS_
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	qword ptr [rsp - 16], rsi
	mov	rsi, qword ptr [rsp - 8]
	mov	eax, dword ptr [rsi]
	mov	rsi, qword ptr [rsp - 16]
	add	eax, dword ptr [rsi]
	ret
	.cfi_endproc

	.globl	__Z13passByPointerPiS_
	.p2align	4, 0x90
__Z13passByPointerPiS_:                 ## @_Z13passByPointerPiS_
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	qword ptr [rsp - 16], rsi
	mov	rsi, qword ptr [rsp - 8]
	mov	eax, dword ptr [rsi]
	mov	rsi, qword ptr [rsp - 16]
	add	eax, dword ptr [rsi]
	ret
	.cfi_endproc

	.globl	__Z16passByFloatValueff
	.p2align	4, 0x90
__Z16passByFloatValueff:                ## @_Z16passByFloatValueff
	.cfi_startproc
## BB#0:
	movss	dword ptr [rsp - 4], xmm0
	movss	dword ptr [rsp - 8], xmm1
	movss	xmm0, dword ptr [rsp - 4] ## xmm0 = mem[0],zero,zero,zero
	addss	xmm0, dword ptr [rsp - 8]
	ret
	.cfi_endproc

	.globl	__Z15passByCharValuecc
	.p2align	4, 0x90
__Z15passByCharValuecc:                 ## @_Z15passByCharValuecc
	.cfi_startproc
## BB#0:
	mov	al, sil
	mov	cl, dil
	mov	byte ptr [rsp - 1], cl
	mov	byte ptr [rsp - 2], al
	movsx	eax, byte ptr [rsp - 1]
	ret
	.cfi_endproc

	.globl	__Z19passByCharReferenceRcS_
	.p2align	4, 0x90
__Z19passByCharReferenceRcS_:           ## @_Z19passByCharReferenceRcS_
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	qword ptr [rsp - 16], rsi
	mov	rsi, qword ptr [rsp - 8]
	movsx	eax, byte ptr [rsi]
	ret
	.cfi_endproc

	.globl	__Z17passByCharPointerPcS_
	.p2align	4, 0x90
__Z17passByCharPointerPcS_:             ## @_Z17passByCharPointerPcS_
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	qword ptr [rsp - 16], rsi
	mov	rsi, qword ptr [rsp - 8]
	movsx	eax, byte ptr [rsi]
	ret
	.cfi_endproc

	.globl	__Z4bothiPi
	.p2align	4, 0x90
__Z4bothiPi:                            ## @_Z4bothiPi
	.cfi_startproc
## BB#0:
	mov	dword ptr [rsp - 4], edi
	mov	qword ptr [rsp - 16], rsi
	mov	edi, dword ptr [rsp - 4]
	mov	rsi, qword ptr [rsp - 16]
	add	edi, dword ptr [rsi]
	mov	eax, edi
	ret
	.cfi_endproc

	.globl	__Z5arrayPi
	.p2align	4, 0x90
__Z5arrayPi:                            ## @_Z5arrayPi
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	rdi, qword ptr [rsp - 8]
	mov	dword ptr [rdi], 5
	mov	rdi, qword ptr [rsp - 8]
	mov	dword ptr [rdi + 4], 6
	mov	rdi, qword ptr [rsp - 8]
	mov	dword ptr [rdi + 8], 7
	ret
	.cfi_endproc

	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	xor	eax, eax
	lea	rcx, [rsp - 12]
	lea	rdx, [rsp - 8]
	mov	dword ptr [rsp - 4], 0
	mov	dword ptr [rsp - 8], 5
	mov	dword ptr [rsp - 12], 7
	mov	qword ptr [rsp - 24], rdx
	mov	qword ptr [rsp - 32], rcx
	ret
	.cfi_endproc


.subsections_via_symbols
