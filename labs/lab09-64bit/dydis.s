	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp2:
	.cfi_def_cfa_register rbp
	sub	rsp, 32
	mov	eax, 8
	mov	edi, eax
	call	__Znwm
	xor	esi, esi
	mov	ecx, 8
	mov	edx, ecx
	mov	rdi, rax
	mov	qword ptr [rbp - 16], rax ## 8-byte Spill
	call	_memset
	mov	rdi, qword ptr [rbp - 16] ## 8-byte Reload
	call	__ZN1BC1Ev
	xor	esi, esi
	mov	rax, qword ptr [rbp - 16] ## 8-byte Reload
	mov	qword ptr [rbp - 8], rax
	mov	rax, qword ptr [rbp - 8]
	mov	rdx, qword ptr [rax]
	mov	rdi, rax
	call	qword ptr [rdx]
	xor	ecx, ecx
	mov	dword ptr [rbp - 20], eax ## 4-byte Spill
	mov	eax, ecx
	add	rsp, 32
	pop	rbp
	ret
	.cfi_endproc

	.globl	__ZN1BC1Ev
	.weak_def_can_be_hidden	__ZN1BC1Ev
	.p2align	4, 0x90
__ZN1BC1Ev:                             ## @_ZN1BC1Ev
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp5:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	mov	qword ptr [rbp - 8], rdi
	mov	rdi, qword ptr [rbp - 8]
	call	__ZN1BC2Ev
	add	rsp, 16
	pop	rbp
	ret
	.cfi_endproc

	.globl	__ZN1BC2Ev
	.weak_def_can_be_hidden	__ZN1BC2Ev
	.p2align	4, 0x90
__ZN1BC2Ev:                             ## @_ZN1BC2Ev
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp6:
	.cfi_def_cfa_offset 16
Ltmp7:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp8:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	mov	qword ptr [rbp - 8], rdi
	mov	rdi, qword ptr [rbp - 8]
	mov	rax, rdi
	mov	qword ptr [rbp - 16], rdi ## 8-byte Spill
	mov	rdi, rax
	call	__ZN1AC2Ev
	mov	rax, qword ptr [rip + __ZTV1B@GOTPCREL]
	add	rax, 16
	mov	rdi, qword ptr [rbp - 16] ## 8-byte Reload
	mov	qword ptr [rdi], rax
	add	rsp, 16
	pop	rbp
	ret
	.cfi_endproc

	.globl	__ZN1AC2Ev
	.weak_def_can_be_hidden	__ZN1AC2Ev
	.p2align	4, 0x90
__ZN1AC2Ev:                             ## @_ZN1AC2Ev
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp9:
	.cfi_def_cfa_offset 16
Ltmp10:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp11:
	.cfi_def_cfa_register rbp
	mov	rax, qword ptr [rip + __ZTV1A@GOTPCREL]
	add	rax, 16
	mov	qword ptr [rbp - 8], rdi
	mov	rdi, qword ptr [rbp - 8]
	mov	qword ptr [rdi], rax
	pop	rbp
	ret
	.cfi_endproc

	.globl	__ZN1B8subtractEi
	.weak_def_can_be_hidden	__ZN1B8subtractEi
	.p2align	4, 0x90
__ZN1B8subtractEi:                      ## @_ZN1B8subtractEi
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp12:
	.cfi_def_cfa_offset 16
Ltmp13:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp14:
	.cfi_def_cfa_register rbp
	mov	qword ptr [rbp - 8], rdi
	mov	dword ptr [rbp - 12], esi
	mov	esi, dword ptr [rbp - 12]
	sub	esi, 140
	mov	eax, esi
	pop	rbp
	ret
	.cfi_endproc

	.globl	__ZN1A8subtractEi
	.weak_def_can_be_hidden	__ZN1A8subtractEi
	.p2align	4, 0x90
__ZN1A8subtractEi:                      ## @_ZN1A8subtractEi
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp15:
	.cfi_def_cfa_offset 16
Ltmp16:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp17:
	.cfi_def_cfa_register rbp
	mov	qword ptr [rbp - 8], rdi
	mov	dword ptr [rbp - 12], esi
	mov	esi, dword ptr [rbp - 12]
	sub	esi, 70
	mov	eax, esi
	pop	rbp
	ret
	.cfi_endproc

	.section	__DATA,__data
	.globl	__ZTV1B                 ## @_ZTV1B
	.weak_def_can_be_hidden	__ZTV1B
	.p2align	3
__ZTV1B:
	.quad	0
	.quad	__ZTI1B
	.quad	__ZN1B8subtractEi

	.section	__TEXT,__const
	.globl	__ZTS1B                 ## @_ZTS1B
	.weak_definition	__ZTS1B
__ZTS1B:
	.asciz	"1B"

	.globl	__ZTS1A                 ## @_ZTS1A
	.weak_definition	__ZTS1A
__ZTS1A:
	.asciz	"1A"

	.section	__DATA,__data
	.globl	__ZTI1A                 ## @_ZTI1A
	.weak_definition	__ZTI1A
	.p2align	3
__ZTI1A:
	.quad	__ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	__ZTS1A

	.globl	__ZTI1B                 ## @_ZTI1B
	.weak_definition	__ZTI1B
	.p2align	4
__ZTI1B:
	.quad	__ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	__ZTS1B
	.quad	__ZTI1A

	.globl	__ZTV1A                 ## @_ZTV1A
	.weak_def_can_be_hidden	__ZTV1A
	.p2align	3
__ZTV1A:
	.quad	0
	.quad	__ZTI1A
	.quad	__ZN1A8subtractEi


.subsections_via_symbols
