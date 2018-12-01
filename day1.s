	.file	"day1.cpp"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"day1inp.txt"
	.text
	.p2align 4,,15
	.globl	_Z5part1v
	.type	_Z5part1v, @function
_Z5part1v:
.LFB2705:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2705
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	leaq	16+_ZTVSt9basic_iosIcSt11char_traitsIcEE(%rip), %r15
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$584, %rsp
	.cfi_def_cfa_offset 640
	leaq	32(%rsp), %rbx
	movq	%fs:40, %rax
	movq	%rax, 568(%rsp)
	xorl	%eax, %eax
	leaq	264(%rbx), %rdi
	call	_ZNSt8ios_baseC2Ev@PLT
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %r13
	pxor	%xmm0, %xmm0
	movb	$0, 520(%rsp)
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	xorl	%esi, %esi
	movq	%r15, 296(%rsp)
	movq	$0, 512(%rsp)
	movaps	%xmm0, 528(%rsp)
	movb	$0, 521(%rsp)
	movq	%r13, 32(%rsp)
	movaps	%xmm0, 544(%rsp)
	movq	-24(%r13), %rax
	movq	%rcx, 32(%rsp,%rax)
	movq	$0, 40(%rsp)
	movq	-24(%r13), %rdi
	addq	%rbx, %rdi
.LEHB0:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
.LEHE0:
	movq	32+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %r14
	xorl	%esi, %esi
	movq	-24(%r14), %rax
	movq	%r14, 48(%rsp)
	leaq	16(%rbx,%rax), %rdi
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, (%rdi)
.LEHB1:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
.LEHE1:
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	leaq	24(%rbx), %rdi
	movq	-24(%rax), %rax
	movq	%rcx, 32(%rsp,%rax)
	leaq	24+_ZTVSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 32(%rsp)
	addq	$80, %rax
	movq	%rax, 296(%rsp)
	subq	$40, %rax
	movq	%rax, 48(%rsp)
.LEHB2:
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev@PLT
.LEHE2:
	leaq	24(%rbx), %rsi
	leaq	264(%rbx), %rdi
.LEHB3:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
	leaq	24(%rbx), %rdi
	leaq	.LC0(%rip), %rsi
	movl	$24, %edx
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode@PLT
	movq	32(%rsp), %rdx
	movq	-24(%rdx), %rdi
	addq	%rbx, %rdi
	testq	%rax, %rax
	je	.L22
	xorl	%esi, %esi
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
.LEHE3:
.L7:
	xorl	%ebp, %ebp
	leaq	28(%rsp), %r12
	jmp	.L6
	.p2align 4,,10
	.p2align 3
.L23:
	addl	28(%rsp), %ebp
.L6:
	movq	%r12, %rsi
	movq	%rbx, %rdi
.LEHB4:
	call	_ZNSirsERi@PLT
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	testb	$5, 32(%rax,%rdx)
	je	.L23
	leaq	_ZSt4cout(%rip), %rdi
	movl	%ebp, %esi
	call	_ZNSolsEi@PLT
	leaq	27(%rsp), %rsi
	movl	$1, %edx
	movq	%rax, %rdi
	movb	$10, 27(%rsp)
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.LEHE4:
	leaq	24+_ZTVSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	.LC1(%rip), %xmm0
	leaq	24(%rbx), %rdi
	movq	%rax, 32(%rsp)
	addq	$80, %rax
	movq	%rax, 296(%rsp)
	leaq	16+_ZTVSt13basic_filebufIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 8(%rsp)
	movhps	8(%rsp), %xmm0
	movaps	%xmm0, 48(%rsp)
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv@PLT
	leaq	128(%rbx), %rdi
	call	_ZNSt12__basic_fileIcED1Ev@PLT
	leaq	16+_ZTVSt15basic_streambufIcSt11char_traitsIcEE(%rip), %rax
	leaq	80(%rbx), %rdi
	movq	%rax, 56(%rsp)
	call	_ZNSt6localeD1Ev@PLT
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	leaq	264(%rbx), %rdi
	movq	-24(%rax), %rax
	movq	%rcx, 32(%rsp,%rax)
	movq	-24(%r14), %rax
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	movq	%r14, 48(%rsp)
	movq	%rcx, 48(%rsp,%rax)
	movq	-24(%r13), %rax
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	movq	%r13, 32(%rsp)
	movq	%rcx, 32(%rsp,%rax)
	movq	$0, 40(%rsp)
	movq	%r15, 296(%rsp)
	call	_ZNSt8ios_baseD2Ev@PLT
	movq	568(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L24
	addq	$584, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L22:
	.cfi_restore_state
	movl	32(%rdi), %esi
	orl	$4, %esi
.LEHB5:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
.LEHE5:
	jmp	.L7
.L24:
	call	__stack_chk_fail@PLT
.L13:
	movq	%rax, %rbp
	movq	%rbx, %rdi
	call	_ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev@PLT
	movq	%rbp, %rdi
.LEHB6:
	call	_Unwind_Resume@PLT
.L16:
	leaq	24(%rbx), %rdi
	movq	%rax, %rbp
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev@PLT
.L9:
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	-24(%rax), %rdx
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 32(%rsp,%rdx)
	movq	-24(%r14), %rdx
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%r14, 48(%rsp)
	movq	%rax, 48(%rsp,%rdx)
	movq	-24(%r13), %rdx
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%r13, 32(%rsp)
	movq	%rax, 32(%rsp,%rdx)
	movq	$0, 40(%rsp)
.L4:
	leaq	264(%rbx), %rdi
	movq	%r15, 296(%rsp)
	call	_ZNSt8ios_baseD2Ev@PLT
	movq	%rbp, %rdi
	call	_Unwind_Resume@PLT
.LEHE6:
.L15:
	movq	%rax, %rbp
	jmp	.L9
.L17:
	movq	-24(%r13), %rdx
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	movq	%rax, %rbp
	movq	%r13, 32(%rsp)
	movq	%rcx, 32(%rsp,%rdx)
	movq	$0, 40(%rsp)
	jmp	.L4
.L14:
	movq	%rax, %rbp
	jmp	.L4
	.cfi_endproc
.LFE2705:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2705:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2705-.LLSDACSB2705
.LLSDACSB2705:
	.uleb128 .LEHB0-.LFB2705
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L14-.LFB2705
	.uleb128 0
	.uleb128 .LEHB1-.LFB2705
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L17-.LFB2705
	.uleb128 0
	.uleb128 .LEHB2-.LFB2705
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L15-.LFB2705
	.uleb128 0
	.uleb128 .LEHB3-.LFB2705
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L16-.LFB2705
	.uleb128 0
	.uleb128 .LEHB4-.LFB2705
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L13-.LFB2705
	.uleb128 0
	.uleb128 .LEHB5-.LFB2705
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L16-.LFB2705
	.uleb128 0
	.uleb128 .LEHB6-.LFB2705
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE2705:
	.text
	.size	_Z5part1v, .-_Z5part1v
	.section	.text._ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,"axG",@progbits,_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	.type	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_, @function
_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_:
.LFB3186:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movq	%rsi, %r14
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movq	%rsi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movq	%rdi, %rbp
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	movq	8(%rdi), %rcx
	movq	(%rdi), %rbx
	movq	%rcx, %rax
	subq	%rbx, %r14
	subq	%rbx, %rax
	sarq	$2, %rax
	testq	%rax, %rax
	je	.L33
	leaq	(%rax,%rax), %rsi
	movq	$-4, %r15
	cmpq	%rsi, %rax
	jbe	.L44
.L27:
	movq	%r15, %rdi
	movq	%rdx, (%rsp)
	call	_Znwm@PLT
	movq	0(%rbp), %rbx
	movq	8(%rbp), %rcx
	movq	%r12, %r8
	movq	(%rsp), %rdx
	movq	%rax, %r13
	addq	%rax, %r15
	subq	%rbx, %r8
.L28:
	addq	%r13, %r14
	je	.L29
	movl	(%rdx), %eax
	movl	%eax, (%r14)
.L29:
	cmpq	%rbx, %r12
	je	.L30
	movq	%r8, %rdx
	movq	%rbx, %rsi
	movq	%r13, %rdi
	movq	%rcx, 8(%rsp)
	movq	%r8, (%rsp)
	call	memmove@PLT
	movq	8(%rsp), %rcx
	movq	(%rsp), %r8
.L30:
	movq	%rcx, %r14
	leaq	4(%r13,%r8), %r8
	subq	%r12, %r14
	cmpq	%r12, %rcx
	je	.L31
	movq	%r8, %rdi
	movq	%r14, %rdx
	movq	%r12, %rsi
	call	memcpy@PLT
	movq	%rax, %r8
.L31:
	addq	%r8, %r14
	testq	%rbx, %rbx
	je	.L32
	movq	%rbx, %rdi
	call	_ZdlPv@PLT
.L32:
	movq	%r13, 0(%rbp)
	movq	%r14, 8(%rbp)
	movq	%r15, 16(%rbp)
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L33:
	.cfi_restore_state
	movl	$1, %esi
.L26:
	leaq	0(,%rsi,4), %r15
	jmp	.L27
	.p2align 4,,10
	.p2align 3
.L44:
	movabsq	$4611686018427387903, %rax
	cmpq	%rax, %rsi
	ja	.L27
	testq	%rsi, %rsi
	jne	.L26
	movq	%r14, %r8
	xorl	%r15d, %r15d
	xorl	%r13d, %r13d
	jmp	.L28
	.cfi_endproc
.LFE3186:
	.size	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_, .-_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	.section	.text._ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm,"axG",@progbits,_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm
	.type	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm, @function
_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm:
.LFB3348:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA3348
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	movq	%rdi, %rbp
	movq	%rsi, %rbx
	subq	$8, %rsp
	.cfi_def_cfa_offset 48
	cmpq	$1, %rsi
	je	.L67
	movabsq	$2305843009213693951, %rax
	movq	%rdx, %r12
	cmpq	%rax, %rsi
	ja	.L68
	leaq	0(,%rsi,8), %r13
	movq	%r13, %rdi
.LEHB7:
	call	_Znwm@PLT
	movq	%r13, %rdx
	xorl	%esi, %esi
	movq	%rax, %rdi
	movq	%rax, %r12
	call	memset@PLT
	leaq	48(%rbp), %r10
.L47:
	movq	16(%rbp), %rcx
	movq	$0, 16(%rbp)
	testq	%rcx, %rcx
	je	.L49
	xorl	%r8d, %r8d
	leaq	16(%rbp), %r9
	jmp	.L50
	.p2align 4,,10
	.p2align 3
.L51:
	movq	(%rax), %rdx
	movq	%rdx, (%rcx)
	movq	%rcx, (%rax)
.L52:
	testq	%rdi, %rdi
	movq	%rdi, %rcx
	je	.L49
.L50:
	movslq	8(%rcx), %rax
	xorl	%edx, %edx
	movq	(%rcx), %rdi
	divq	%rbx
	leaq	(%r12,%rdx,8), %rsi
	movq	(%rsi), %rax
	testq	%rax, %rax
	jne	.L51
	movq	16(%rbp), %rax
	testq	%rax, %rax
	movq	%rax, (%rcx)
	movq	%rcx, 16(%rbp)
	movq	%r9, (%rsi)
	je	.L56
	testq	%rdi, %rdi
	movq	%rcx, (%r12,%r8,8)
	movq	%rdx, %r8
	movq	%rdi, %rcx
	jne	.L50
	.p2align 4,,10
	.p2align 3
.L49:
	movq	0(%rbp), %rdi
	cmpq	%r10, %rdi
	je	.L53
	call	_ZdlPv@PLT
.L53:
	movq	%rbx, 8(%rbp)
	movq	%r12, 0(%rbp)
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L56:
	.cfi_restore_state
	movq	%rdx, %r8
	jmp	.L52
	.p2align 4,,10
	.p2align 3
.L67:
	leaq	48(%rdi), %r12
	movq	$0, 48(%rdi)
	movq	%r12, %r10
	jmp	.L47
.L68:
	call	_ZSt17__throw_bad_allocv@PLT
.LEHE7:
.L57:
	movq	%rax, %rdi
	call	__cxa_begin_catch@PLT
	movq	(%r12), %rax
	movq	%rax, 40(%rbp)
.LEHB8:
	call	__cxa_rethrow@PLT
.LEHE8:
.L58:
	movq	%rax, %rbx
	call	__cxa_end_catch@PLT
	movq	%rbx, %rdi
.LEHB9:
	call	_Unwind_Resume@PLT
.LEHE9:
	.cfi_endproc
.LFE3348:
	.section	.gcc_except_table
	.align 4
.LLSDA3348:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT3348-.LLSDATTD3348
.LLSDATTD3348:
	.byte	0x1
	.uleb128 .LLSDACSE3348-.LLSDACSB3348
.LLSDACSB3348:
	.uleb128 .LEHB7-.LFB3348
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L57-.LFB3348
	.uleb128 0x1
	.uleb128 .LEHB8-.LFB3348
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L58-.LFB3348
	.uleb128 0
	.uleb128 .LEHB9-.LFB3348
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
.LLSDACSE3348:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3348:
	.section	.text._ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm,"axG",@progbits,_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm,comdat
	.size	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm, .-_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm
	.section	.text._ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE,"axG",@progbits,_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE
	.type	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE, @function
_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE:
.LFB3368:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA3368
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	movq	%rsi, %r13
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	movq	%rdx, %r12
	movq	%rdi, %rbx
	movq	%rcx, %rbp
	addq	$32, %rdi
	subq	$24, %rsp
	.cfi_def_cfa_offset 64
	movq	-8(%rdi), %rdx
	movq	-24(%rdi), %rsi
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movq	8(%rdi), %rax
	movl	$1, %ecx
	movq	%rax, (%rsp)
.LEHB10:
	call	_ZNKSt8__detail20_Prime_rehash_policy14_M_need_rehashEmmm@PLT
.LEHE10:
	testb	%al, %al
	je	.L70
	movq	%rdx, %rsi
	movq	%rbx, %rdi
	movq	%rsp, %rdx
.LEHB11:
	call	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm
.LEHE11:
	movq	%r12, %rax
	xorl	%edx, %edx
	divq	8(%rbx)
	movq	%rdx, %r13
.L70:
	movq	(%rbx), %rsi
	leaq	(%rsi,%r13,8), %rcx
	movq	(%rcx), %rax
	testq	%rax, %rax
	je	.L71
	movq	(%rax), %rdx
	movq	%rdx, 0(%rbp)
	movq	%rbp, (%rax)
.L72:
	addq	$1, 24(%rbx)
	movq	%rbp, %rax
	movq	8(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L84
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L71:
	.cfi_restore_state
	movq	16(%rbx), %rax
	testq	%rax, %rax
	movq	%rax, 0(%rbp)
	movq	%rbp, 16(%rbx)
	je	.L73
	movq	0(%rbp), %rax
	xorl	%edx, %edx
	movslq	8(%rax), %rax
	divq	8(%rbx)
	movq	%rbp, (%rsi,%rdx,8)
.L73:
	leaq	16(%rbx), %rax
	movq	%rax, (%rcx)
	jmp	.L72
.L84:
	call	__stack_chk_fail@PLT
.L77:
	movq	%rax, %rdi
	call	__cxa_begin_catch@PLT
	movq	%rbp, %rdi
	call	_ZdlPv@PLT
.LEHB12:
	call	__cxa_rethrow@PLT
.LEHE12:
.L78:
	movq	%rax, %rbx
	call	__cxa_end_catch@PLT
	movq	%rbx, %rdi
.LEHB13:
	call	_Unwind_Resume@PLT
.LEHE13:
	.cfi_endproc
.LFE3368:
	.section	.gcc_except_table
	.align 4
.LLSDA3368:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT3368-.LLSDATTD3368
.LLSDATTD3368:
	.byte	0x1
	.uleb128 .LLSDACSE3368-.LLSDACSB3368
.LLSDACSB3368:
	.uleb128 .LEHB10-.LFB3368
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB11-.LFB3368
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L77-.LFB3368
	.uleb128 0x1
	.uleb128 .LEHB12-.LFB3368
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L78-.LFB3368
	.uleb128 0
	.uleb128 .LEHB13-.LFB3368
	.uleb128 .LEHE13-.LEHB13
	.uleb128 0
	.uleb128 0
.LLSDACSE3368:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT3368:
	.section	.text._ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE,"axG",@progbits,_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE,comdat
	.size	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE, .-_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE
	.text
	.p2align 4,,15
	.globl	_Z5part2v
	.type	_Z5part2v, @function
_Z5part2v:
.LFB2706:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2706
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$680, %rsp
	.cfi_def_cfa_offset 736
	leaq	128(%rsp), %r15
	movq	%fs:40, %rax
	movq	%rax, 664(%rsp)
	xorl	%eax, %eax
	leaq	264(%r15), %rdi
	call	_ZNSt8ios_baseC2Ev@PLT
	leaq	16+_ZTVSt9basic_iosIcSt11char_traitsIcEE(%rip), %rax
	pxor	%xmm0, %xmm0
	movb	$0, 616(%rsp)
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	xorl	%esi, %esi
	movq	%rax, 392(%rsp)
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movaps	%xmm0, 624(%rsp)
	movq	$0, 608(%rsp)
	movb	$0, 617(%rsp)
	movaps	%xmm0, 640(%rsp)
	movq	%rax, 128(%rsp)
	movq	-24(%rax), %rax
	movq	%rcx, 128(%rsp,%rax)
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	$0, 136(%rsp)
	movq	-24(%rax), %rdi
	addq	%r15, %rdi
.LEHB14:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
.LEHE14:
	movq	32+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	xorl	%esi, %esi
	movq	%rax, 144(%rsp)
	movq	-24(%rax), %rax
	leaq	16(%r15,%rax), %rdi
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, (%rdi)
.LEHB15:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
.LEHE15:
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	leaq	24(%r15), %rdi
	movq	-24(%rax), %rax
	movq	%rcx, 128(%rsp,%rax)
	leaq	24+_ZTVSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 128(%rsp)
	addq	$80, %rax
	movq	%rax, 392(%rsp)
	subq	$40, %rax
	movq	%rax, 144(%rsp)
.LEHB16:
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev@PLT
.LEHE16:
	leaq	24(%r15), %rsi
	leaq	264(%r15), %rdi
.LEHB17:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E@PLT
	leaq	24(%r15), %rdi
	leaq	.LC0(%rip), %rsi
	movl	$24, %edx
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode@PLT
	movq	128(%rsp), %rdx
	movq	-24(%rdx), %rdi
	addq	%r15, %rdi
	testq	%rax, %rax
	je	.L162
	xorl	%esi, %esi
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
.LEHE17:
.L90:
	pxor	%xmm0, %xmm0
	movl	$4096, %edi
	movq	$0, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
.LEHB18:
	call	_Znwm@PLT
	movq	32(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L93
	movq	%rax, (%rsp)
	call	_ZdlPv@PLT
	movq	(%rsp), %rax
.L93:
	movq	%rax, (%rsp)
	leaq	20(%rsp), %rbx
	addq	$4096, %rax
	movq	(%rsp), %xmm0
	leaq	32(%rsp), %rbp
	punpcklqdq	%xmm0, %xmm0
	movq	%rax, 48(%rsp)
	movaps	%xmm0, 32(%rsp)
.L94:
	movq	%rbx, %rsi
	movq	%r15, %rdi
	call	_ZNSirsERi@PLT
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	testb	$5, 32(%rax,%rdx)
	jne	.L95
.L163:
	movq	40(%rsp), %rsi
	cmpq	48(%rsp), %rsi
	je	.L96
	testq	%rsi, %rsi
	je	.L97
	movl	20(%rsp), %eax
	movl	%eax, (%rsi)
.L97:
	addq	$4, %rsi
	movq	%r15, %rdi
	movq	%rsi, 40(%rsp)
	movq	%rbx, %rsi
	call	_ZNSirsERi@PLT
.LEHE18:
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	testb	$5, 32(%rax,%rdx)
	je	.L163
.L95:
	leaq	64(%rsp), %rbx
	movl	$65536, %esi
	movq	$1, 72(%rsp)
	movq	$0, 80(%rsp)
	movq	$0, 88(%rsp)
	leaq	48(%rbx), %rax
	leaq	32(%rbx), %rdi
	movq	%rbx, 8(%rsp)
	movl	$0x3f800000, 96(%rsp)
	movq	$0, 104(%rsp)
	movq	%rax, 64(%rsp)
	movq	$0, 112(%rsp)
	movq	$0, 24(%rsp)
.LEHB19:
	call	_ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm@PLT
	cmpq	72(%rsp), %rax
	movq	%rax, %rsi
	jne	.L164
	movq	24(%rsp), %rax
	movq	%rax, 104(%rsp)
.L100:
	movq	40(%rsp), %rax
	movq	64(%rsp), %r10
	xorl	%r14d, %r14d
	movq	%rax, (%rsp)
	movq	32(%rsp), %rax
.L102:
	cmpq	%rax, (%rsp)
	movq	%rax, %r12
	je	.L102
	.p2align 4,,10
	.p2align 3
.L114:
	movl	(%r12), %ebx
	xorl	%edx, %edx
	addl	%r14d, %ebx
	movslq	%ebx, %r13
	movq	%r13, %rax
	movq	%r13, %r14
	divq	%rsi
	movq	(%r10,%rdx,8), %rax
	movq	%rdx, %rbp
	testq	%rax, %rax
	je	.L103
	movq	(%rax), %rcx
	movl	8(%rcx), %r9d
	movq	%rcx, %rdi
	movl	%r9d, %r8d
	jmp	.L106
	.p2align 4,,10
	.p2align 3
.L165:
	movq	(%rdi), %rdi
	testq	%rdi, %rdi
	je	.L113
	movslq	8(%rdi), %rax
	xorl	%edx, %edx
	movq	%rax, %r8
	divq	%rsi
	cmpq	%rdx, %rbp
	jne	.L113
.L106:
	cmpl	%r8d, %ebx
	jne	.L165
	leaq	_ZSt4cout(%rip), %rdi
	movl	%ebx, %esi
	call	_ZNSolsEi@PLT
	leaq	19(%rsp), %rsi
	movl	$1, %edx
	movq	%rax, %rdi
	movb	$10, 19(%rsp)
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.LEHE19:
	movq	80(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L107
	.p2align 4,,10
	.p2align 3
.L108:
	movq	(%rdi), %rbx
	call	_ZdlPv@PLT
	testq	%rbx, %rbx
	movq	%rbx, %rdi
	jne	.L108
.L107:
	movq	72(%rsp), %rax
	movq	64(%rsp), %rdi
	xorl	%esi, %esi
	leaq	0(,%rax,8), %rdx
	call	memset@PLT
	movq	8(%rsp), %rax
	movq	64(%rsp), %rdi
	movq	$0, 88(%rsp)
	movq	$0, 80(%rsp)
	addq	$48, %rax
	cmpq	%rax, %rdi
	je	.L109
	call	_ZdlPv@PLT
.L109:
	movq	32(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L111
	call	_ZdlPv@PLT
.L111:
	leaq	24+_ZTVSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	.LC1(%rip), %xmm0
	leaq	24(%r15), %rdi
	movq	%rax, 128(%rsp)
	addq	$80, %rax
	movq	%rax, 392(%rsp)
	leaq	16+_ZTVSt13basic_filebufIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, (%rsp)
	movhps	(%rsp), %xmm0
	movaps	%xmm0, 144(%rsp)
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv@PLT
	leaq	128(%r15), %rdi
	call	_ZNSt12__basic_fileIcED1Ev@PLT
	leaq	16+_ZTVSt15basic_streambufIcSt11char_traitsIcEE(%rip), %rax
	leaq	80(%r15), %rdi
	movq	%rax, 152(%rsp)
	call	_ZNSt6localeD1Ev@PLT
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	leaq	264(%r15), %rdi
	movq	-24(%rax), %rax
	movq	%rcx, 128(%rsp,%rax)
	movq	32+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	movq	%rax, 144(%rsp)
	movq	-24(%rax), %rax
	movq	%rcx, 144(%rsp,%rax)
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rcx
	movq	%rax, 128(%rsp)
	movq	-24(%rax), %rax
	movq	%rcx, 128(%rsp,%rax)
	leaq	16+_ZTVSt9basic_iosIcSt11char_traitsIcEE(%rip), %rax
	movq	$0, 136(%rsp)
	movq	%rax, 392(%rsp)
	call	_ZNSt8ios_baseD2Ev@PLT
	movq	664(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L166
	addq	$680, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L167:
	.cfi_restore_state
	movq	(%rcx), %rcx
	testq	%rcx, %rcx
	je	.L103
	movslq	8(%rcx), %rax
	xorl	%edx, %edx
	movq	%rax, %r9
	divq	%rsi
	cmpq	%rdx, %rbp
	jne	.L103
.L113:
	cmpl	%r9d, %ebx
	jne	.L167
	addq	$4, %r12
	cmpq	%r12, (%rsp)
	jne	.L114
.L168:
	movq	40(%rsp), %rax
	movq	%rax, (%rsp)
	movq	32(%rsp), %rax
	jmp	.L102
	.p2align 4,,10
	.p2align 3
.L103:
	movl	$16, %edi
.LEHB20:
	call	_Znwm@PLT
	movq	8(%rsp), %rdi
	movq	$0, (%rax)
	movq	%rax, %rcx
	movl	%ebx, 8(%rax)
	movq	%r13, %rdx
	movq	%rbp, %rsi
	call	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEmmPNS1_10_Hash_nodeIiLb0EEE
.LEHE20:
	addq	$4, %r12
	cmpq	%r12, (%rsp)
	movq	72(%rsp), %rsi
	movq	64(%rsp), %r10
	jne	.L114
	jmp	.L168
	.p2align 4,,10
	.p2align 3
.L96:
	movq	%rbx, %rdx
	movq	%rbp, %rdi
.LEHB21:
	call	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
.LEHE21:
	jmp	.L94
.L164:
	leaq	24(%rsp), %rdx
	movq	%rbx, %rdi
.LEHB22:
	call	_ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE9_M_rehashEmRKm
.LEHE22:
	movq	72(%rsp), %rsi
	jmp	.L100
.L162:
	movl	32(%rdi), %esi
	orl	$4, %esi
.LEHB23:
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
.LEHE23:
	jmp	.L90
.L128:
	leaq	24(%r15), %rdi
	movq	%rax, %rbx
	call	_ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev@PLT
.L92:
	movq	8+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	-24(%rax), %rdx
	movq	48+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 128(%rsp,%rdx)
	movq	32+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	-24(%rax), %rdx
	movq	%rax, 144(%rsp)
	movq	40+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 144(%rsp,%rdx)
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	-24(%rax), %rdx
	movq	%rax, 128(%rsp)
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rax
	movq	%rax, 128(%rsp,%rdx)
	movq	$0, 136(%rsp)
.L88:
	leaq	16+_ZTVSt9basic_iosIcSt11char_traitsIcEE(%rip), %rax
	leaq	264(%r15), %rdi
	movq	%rax, 392(%rsp)
	call	_ZNSt8ios_baseD2Ev@PLT
	movq	%rbx, %rdi
.LEHB24:
	call	_Unwind_Resume@PLT
.L125:
	movq	80(%rsp), %rdi
	movq	%rax, %rbx
.L118:
	testq	%rdi, %rdi
	je	.L117
	movq	(%rdi), %rbp
	call	_ZdlPv@PLT
	movq	%rbp, %rdi
	jmp	.L118
.L124:
	movq	%rax, %rbx
.L120:
	movq	32(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L121
	call	_ZdlPv@PLT
.L121:
	movq	%r15, %rdi
	call	_ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev@PLT
	movq	%rbx, %rdi
	call	_Unwind_Resume@PLT
.LEHE24:
.L117:
	movq	72(%rsp), %rax
	movq	64(%rsp), %rdi
	xorl	%esi, %esi
	leaq	0(,%rax,8), %rdx
	call	memset@PLT
	movq	8(%rsp), %rax
	movq	64(%rsp), %rdi
	movq	$0, 88(%rsp)
	movq	$0, 80(%rsp)
	addq	$48, %rax
	cmpq	%rax, %rdi
	je	.L120
	call	_ZdlPv@PLT
	jmp	.L120
.L127:
	movq	%rax, %rbx
	jmp	.L92
.L129:
	movq	16+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rsi
	movq	%rax, %rbx
	movq	-24(%rsi), %rdx
	movq	%rsi, 128(%rsp)
	movq	24+_ZTTSt13basic_fstreamIcSt11char_traitsIcEE(%rip), %rsi
	movq	%rsi, 128(%rsp,%rdx)
	movq	$0, 136(%rsp)
	jmp	.L88
.L126:
	movq	%rax, %rbx
	jmp	.L88
.L166:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE2706:
	.section	.gcc_except_table
.LLSDA2706:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2706-.LLSDACSB2706
.LLSDACSB2706:
	.uleb128 .LEHB14-.LFB2706
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L126-.LFB2706
	.uleb128 0
	.uleb128 .LEHB15-.LFB2706
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L129-.LFB2706
	.uleb128 0
	.uleb128 .LEHB16-.LFB2706
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L127-.LFB2706
	.uleb128 0
	.uleb128 .LEHB17-.LFB2706
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L128-.LFB2706
	.uleb128 0
	.uleb128 .LEHB18-.LFB2706
	.uleb128 .LEHE18-.LEHB18
	.uleb128 .L124-.LFB2706
	.uleb128 0
	.uleb128 .LEHB19-.LFB2706
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L125-.LFB2706
	.uleb128 0
	.uleb128 .LEHB20-.LFB2706
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L125-.LFB2706
	.uleb128 0
	.uleb128 .LEHB21-.LFB2706
	.uleb128 .LEHE21-.LEHB21
	.uleb128 .L124-.LFB2706
	.uleb128 0
	.uleb128 .LEHB22-.LFB2706
	.uleb128 .LEHE22-.LEHB22
	.uleb128 .L125-.LFB2706
	.uleb128 0
	.uleb128 .LEHB23-.LFB2706
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L128-.LFB2706
	.uleb128 0
	.uleb128 .LEHB24-.LFB2706
	.uleb128 .LEHE24-.LEHB24
	.uleb128 0
	.uleb128 0
.LLSDACSE2706:
	.text
	.size	_Z5part2v, .-_Z5part2v
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB2728:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	call	_Z5part2v
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2728:
	.size	main, .-main
	.p2align 4,,15
	.type	_GLOBAL__sub_I__Z5part1v, @function
_GLOBAL__sub_I__Z5part1v:
.LFB3518:
	.cfi_startproc
	leaq	_ZStL8__ioinit(%rip), %rdi
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE3518:
	.size	_GLOBAL__sub_I__Z5part1v, .-_GLOBAL__sub_I__Z5part1v
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z5part1v
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.data.rel.ro,"aw",@progbits
	.align 8
.LC1:
	.quad	_ZTVSt13basic_fstreamIcSt11char_traitsIcEE+64
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
