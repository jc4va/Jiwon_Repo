	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	xor	eax, eax
	mov	dword ptr [rsp - 8], 3
	ret
	.cfi_endproc


.subsections_via_symbols
