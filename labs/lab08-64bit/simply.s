	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	__Z3fooi
	.p2align	4, 0x90
__Z3fooi:                               ## @_Z3fooi
	.cfi_startproc
## BB#0:
	mov	dword ptr [rsp - 4], edi
	mov	edi, dword ptr [rsp - 4]
	add	edi, 3
	mov	dword ptr [rsp - 4], edi
	mov	eax, edi
	ret
	.cfi_endproc

	.globl	__Z3barRi
	.p2align	4, 0x90
__Z3barRi:                              ## @_Z3barRi
	.cfi_startproc
## BB#0:
	mov	qword ptr [rsp - 8], rdi
	mov	rdi, qword ptr [rsp - 8]
	mov	eax, dword ptr [rdi]
	add	eax, 3
	mov	dword ptr [rdi], eax
	ret
	.cfi_endproc

	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	sub	rsp, 24
Ltmp0:
	.cfi_def_cfa_offset 32
	mov	dword ptr [rsp + 20], 3
	mov	edi, dword ptr [rsp + 20]
	call	__Z3fooi
	lea	rdi, [rsp + 20]
	mov	dword ptr [rsp + 16], eax ## 4-byte Spill
	call	__Z3barRi
	xor	ecx, ecx
	mov	dword ptr [rsp + 12], eax ## 4-byte Spill
	mov	eax, ecx
	add	rsp, 24
	ret
	.cfi_endproc


.subsections_via_symbols
