	.file	"matrix.c"
	.text
	.globl	_matrix4f_diagonal
	.def	_matrix4f_diagonal;	.scl	2;	.type	32;	.endef
_matrix4f_diagonal:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$64, %esp
	flds	12(%ebp)
	fstps	-64(%ebp)
	fldz
	fstps	-60(%ebp)
	fldz
	fstps	-56(%ebp)
	fldz
	fstps	-52(%ebp)
	fldz
	fstps	-48(%ebp)
	flds	12(%ebp)
	fstps	-44(%ebp)
	fldz
	fstps	-40(%ebp)
	fldz
	fstps	-36(%ebp)
	fldz
	fstps	-32(%ebp)
	fldz
	fstps	-28(%ebp)
	flds	12(%ebp)
	fstps	-24(%ebp)
	fldz
	fstps	-20(%ebp)
	fldz
	fstps	-16(%ebp)
	fldz
	fstps	-12(%ebp)
	fldz
	fstps	-8(%ebp)
	flds	12(%ebp)
	fstps	-4(%ebp)
	movl	8(%ebp), %eax
	movl	-64(%ebp), %edx
	movl	%edx, (%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-16(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.globl	_matrix4f_4v
	.def	_matrix4f_4v;	.scl	2;	.type	32;	.endef
_matrix4f_4v:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$64, %esp
	flds	12(%ebp)
	fstps	-64(%ebp)
	flds	16(%ebp)
	fstps	-60(%ebp)
	flds	20(%ebp)
	fstps	-56(%ebp)
	flds	24(%ebp)
	fstps	-52(%ebp)
	flds	28(%ebp)
	fstps	-48(%ebp)
	flds	32(%ebp)
	fstps	-44(%ebp)
	flds	36(%ebp)
	fstps	-40(%ebp)
	flds	40(%ebp)
	fstps	-36(%ebp)
	flds	44(%ebp)
	fstps	-32(%ebp)
	flds	48(%ebp)
	fstps	-28(%ebp)
	flds	52(%ebp)
	fstps	-24(%ebp)
	flds	56(%ebp)
	fstps	-20(%ebp)
	flds	60(%ebp)
	fstps	-16(%ebp)
	flds	64(%ebp)
	fstps	-12(%ebp)
	flds	68(%ebp)
	fstps	-8(%ebp)
	flds	72(%ebp)
	fstps	-4(%ebp)
	movl	8(%ebp), %eax
	movl	-64(%ebp), %edx
	movl	%edx, (%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-16(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.globl	_matrix4f_elements
	.def	_matrix4f_elements;	.scl	2;	.type	32;	.endef
_matrix4f_elements:
LFB19:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$64, %esp
	movl	12(%ebp), %eax
	flds	(%eax)
	fstps	-64(%ebp)
	movl	12(%ebp), %eax
	flds	4(%eax)
	fstps	-60(%ebp)
	movl	12(%ebp), %eax
	flds	8(%eax)
	fstps	-56(%ebp)
	movl	12(%ebp), %eax
	flds	12(%eax)
	fstps	-52(%ebp)
	movl	12(%ebp), %eax
	flds	16(%eax)
	fstps	-48(%ebp)
	movl	12(%ebp), %eax
	flds	20(%eax)
	fstps	-44(%ebp)
	movl	12(%ebp), %eax
	flds	24(%eax)
	fstps	-40(%ebp)
	movl	12(%ebp), %eax
	flds	28(%eax)
	fstps	-36(%ebp)
	movl	12(%ebp), %eax
	flds	32(%eax)
	fstps	-32(%ebp)
	movl	12(%ebp), %eax
	flds	36(%eax)
	fstps	-28(%ebp)
	movl	12(%ebp), %eax
	flds	40(%eax)
	fstps	-24(%ebp)
	movl	12(%ebp), %eax
	flds	44(%eax)
	fstps	-20(%ebp)
	movl	12(%ebp), %eax
	flds	48(%eax)
	fstps	-16(%ebp)
	movl	12(%ebp), %eax
	flds	52(%eax)
	fstps	-12(%ebp)
	movl	12(%ebp), %eax
	flds	56(%eax)
	fstps	-8(%ebp)
	movl	12(%ebp), %eax
	flds	60(%eax)
	fstps	-4(%ebp)
	movl	8(%ebp), %eax
	movl	-64(%ebp), %edx
	movl	%edx, (%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-16(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE19:
	.globl	_matrix4f_all
	.def	_matrix4f_all;	.scl	2;	.type	32;	.endef
_matrix4f_all:
LFB20:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$152, %esp
	leal	-24(%ebp), %eax
	flds	24(%ebp)
	fstps	16(%esp)
	flds	20(%ebp)
	fstps	12(%esp)
	flds	16(%ebp)
	fstps	8(%esp)
	flds	12(%ebp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	leal	-40(%ebp), %eax
	flds	40(%ebp)
	fstps	16(%esp)
	flds	32(%ebp)
	fstps	12(%esp)
	flds	32(%ebp)
	fstps	8(%esp)
	flds	28(%ebp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	leal	-56(%ebp), %eax
	flds	56(%ebp)
	fstps	16(%esp)
	flds	52(%ebp)
	fstps	12(%esp)
	flds	36(%ebp)
	fstps	8(%esp)
	flds	12(%ebp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	leal	-72(%ebp), %eax
	flds	72(%ebp)
	fstps	16(%esp)
	flds	68(%ebp)
	fstps	12(%esp)
	flds	64(%ebp)
	fstps	8(%esp)
	flds	60(%ebp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	movl	8(%ebp), %eax
	movl	-72(%ebp), %edx
	movl	%edx, 52(%esp)
	movl	-68(%ebp), %edx
	movl	%edx, 56(%esp)
	movl	-64(%ebp), %edx
	movl	%edx, 60(%esp)
	movl	-60(%ebp), %edx
	movl	%edx, 64(%esp)
	movl	-56(%ebp), %edx
	movl	%edx, 36(%esp)
	movl	-52(%ebp), %edx
	movl	%edx, 40(%esp)
	movl	-48(%ebp), %edx
	movl	%edx, 44(%esp)
	movl	-44(%ebp), %edx
	movl	%edx, 48(%esp)
	movl	-40(%ebp), %edx
	movl	%edx, 20(%esp)
	movl	-36(%ebp), %edx
	movl	%edx, 24(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, 28(%esp)
	movl	-28(%ebp), %edx
	movl	%edx, 32(%esp)
	movl	-24(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	-20(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	-16(%ebp), %edx
	movl	%edx, 12(%esp)
	movl	-12(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_4v
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE20:
	.globl	_matrix4f_perspective
	.def	_matrix4f_perspective;	.scl	2;	.type	32;	.endef
_matrix4f_perspective:
LFB21:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$120, %esp
	leal	-80(%ebp), %eax
	fld1
	fstps	4(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_diagonal
	flds	12(%ebp)
	flds	LC3
	fdivrp	%st, %st(1)
	fstps	(%esp)
	movl	__imp__to_radians, %eax
	call	*%eax
	fstpl	(%esp)
	call	_tan
	fstps	-12(%ebp)
	flds	24(%ebp)
	fsubs	20(%ebp)
	fstps	-16(%ebp)
	flds	16(%ebp)
	fmuls	-12(%ebp)
	fld1
	fdivp	%st, %st(1)
	fstps	-80(%ebp)
	fld1
	fdivs	-12(%ebp)
	fstps	-60(%ebp)
	flds	24(%ebp)
	fadds	20(%ebp)
	fchs
	fdivs	-16(%ebp)
	fstps	-40(%ebp)
	fld1
	fchs
	fstps	-24(%ebp)
	flds	24(%ebp)
	flds	LC5
	fmulp	%st, %st(1)
	fmuls	20(%ebp)
	fdivs	-16(%ebp)
	fstps	-36(%ebp)
	fldz
	fstps	-20(%ebp)
	movl	8(%ebp), %eax
	movl	-80(%ebp), %edx
	movl	%edx, (%eax)
	movl	-76(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-72(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-68(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-64(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE21:
	.globl	_matrix4f_orthographic
	.def	_matrix4f_orthographic;	.scl	2;	.type	32;	.endef
_matrix4f_orthographic:
LFB22:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$72, %esp
	leal	-64(%ebp), %eax
	fld1
	fstps	4(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_diagonal
	flds	16(%ebp)
	fsubs	12(%ebp)
	flds	LC3
	fdivp	%st, %st(1)
	fstps	-64(%ebp)
	flds	24(%ebp)
	fsubs	20(%ebp)
	flds	LC3
	fdivp	%st, %st(1)
	fstps	-44(%ebp)
	flds	32(%ebp)
	fsubs	28(%ebp)
	flds	LC5
	fdivp	%st, %st(1)
	fstps	-24(%ebp)
	flds	16(%ebp)
	fadds	12(%ebp)
	fchs
	flds	16(%ebp)
	fsubs	12(%ebp)
	fdivrp	%st, %st(1)
	fstps	-52(%ebp)
	flds	24(%ebp)
	fadds	20(%ebp)
	fchs
	flds	24(%ebp)
	fsubs	20(%ebp)
	fdivrp	%st, %st(1)
	fstps	-36(%ebp)
	flds	32(%ebp)
	fadds	28(%ebp)
	fchs
	flds	32(%ebp)
	fsubs	28(%ebp)
	fdivrp	%st, %st(1)
	fstps	-20(%ebp)
	movl	8(%ebp), %eax
	movl	-64(%ebp), %edx
	movl	%edx, (%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-16(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE22:
	.globl	_matrix4f_look_at
	.def	_matrix4f_look_at;	.scl	2;	.type	32;	.endef
_matrix4f_look_at:
LFB23:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$264, %esp
	leal	-96(%ebp), %eax
	movl	16(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_subtract_f, %eax
	call	*%eax
	leal	-108(%ebp), %eax
	leal	-96(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_normalize_f, %eax
	call	*%eax
	leal	-120(%ebp), %eax
	leal	-108(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	20(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_cross_f, %eax
	call	*%eax
	leal	-132(%ebp), %eax
	leal	-120(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_normalize_f, %eax
	call	*%eax
	leal	-144(%ebp), %eax
	leal	-132(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-108(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_cross_f, %eax
	call	*%eax
	leal	-156(%ebp), %eax
	leal	-144(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec3_normalize_f, %eax
	call	*%eax
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-132(%ebp), %eax
	movl	%eax, (%esp)
	movl	__imp__vec3_dot_f, %eax
	call	*%eax
	fstps	-172(%ebp)
	movl	-172(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-156(%ebp), %eax
	movl	%eax, (%esp)
	movl	__imp__vec3_dot_f, %eax
	call	*%eax
	fstps	-172(%ebp)
	movl	-172(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-108(%ebp), %eax
	movl	%eax, (%esp)
	movl	__imp__vec3_dot_f, %eax
	call	*%eax
	fstps	-172(%ebp)
	movl	-172(%ebp), %eax
	movl	%eax, -20(%ebp)
	flds	-20(%ebp)
	fchs
	flds	-16(%ebp)
	fchs
	flds	-12(%ebp)
	fchs
	leal	-84(%ebp), %eax
	fld1
	fstps	16(%esp)
	fxch	%st(2)
	fstps	12(%esp)
	fstps	8(%esp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	flds	-100(%ebp)
	flds	-148(%ebp)
	flds	-124(%ebp)
	leal	-68(%ebp), %eax
	fldz
	fstps	16(%esp)
	fxch	%st(2)
	fstps	12(%esp)
	fstps	8(%esp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	flds	-104(%ebp)
	flds	-152(%ebp)
	flds	-128(%ebp)
	leal	-52(%ebp), %eax
	fldz
	fstps	16(%esp)
	fxch	%st(2)
	fstps	12(%esp)
	fstps	8(%esp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	flds	-108(%ebp)
	flds	-156(%ebp)
	flds	-132(%ebp)
	leal	-36(%ebp), %eax
	fldz
	fstps	16(%esp)
	fxch	%st(2)
	fstps	12(%esp)
	fstps	8(%esp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	movl	8(%ebp), %eax
	movl	-84(%ebp), %edx
	movl	%edx, 52(%esp)
	movl	-80(%ebp), %edx
	movl	%edx, 56(%esp)
	movl	-76(%ebp), %edx
	movl	%edx, 60(%esp)
	movl	-72(%ebp), %edx
	movl	%edx, 64(%esp)
	movl	-68(%ebp), %edx
	movl	%edx, 36(%esp)
	movl	-64(%ebp), %edx
	movl	%edx, 40(%esp)
	movl	-60(%ebp), %edx
	movl	%edx, 44(%esp)
	movl	-56(%ebp), %edx
	movl	%edx, 48(%esp)
	movl	-52(%ebp), %edx
	movl	%edx, 20(%esp)
	movl	-48(%ebp), %edx
	movl	%edx, 24(%esp)
	movl	-44(%ebp), %edx
	movl	%edx, 28(%esp)
	movl	-40(%ebp), %edx
	movl	%edx, 32(%esp)
	movl	-36(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	-28(%ebp), %edx
	movl	%edx, 12(%esp)
	movl	-24(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_4v
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE23:
	.globl	_matrix4f_translate
	.def	_matrix4f_translate;	.scl	2;	.type	32;	.endef
_matrix4f_translate:
LFB24:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$72, %esp
	movl	12(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	flds	(%eax)
	leal	-24(%ebp), %eax
	fld1
	fstps	16(%esp)
	fxch	%st(2)
	fstps	12(%esp)
	fstps	8(%esp)
	fstps	4(%esp)
	movl	%eax, (%esp)
	movl	__imp__vec4f, %eax
	call	*%eax
	leal	-40(%ebp), %eax
	leal	-24(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_multiply_vec4f
	flds	-40(%ebp)
	movl	8(%ebp), %eax
	fstps	48(%eax)
	flds	-36(%ebp)
	movl	8(%ebp), %eax
	fstps	52(%eax)
	flds	-32(%ebp)
	movl	8(%ebp), %eax
	fstps	56(%eax)
	flds	-28(%ebp)
	movl	8(%ebp), %eax
	fstps	60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE24:
	.globl	_matrix4f_rotate
	.def	_matrix4f_rotate;	.scl	2;	.type	32;	.endef
_matrix4f_rotate:
LFB25:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$104, %esp
	movl	16(%ebp), %eax
	flds	(%eax)
	fstps	-12(%ebp)
	movl	16(%ebp), %eax
	flds	4(%eax)
	fstps	-16(%ebp)
	movl	16(%ebp), %eax
	flds	8(%eax)
	fstps	-20(%ebp)
	flds	20(%ebp)
	fstpl	(%esp)
	call	_cos
	fstps	-24(%ebp)
	flds	20(%ebp)
	fstpl	(%esp)
	call	_sin
	fstps	-28(%ebp)
	fld1
	fsubs	-24(%ebp)
	fstps	-32(%ebp)
	flds	-32(%ebp)
	fmuls	-12(%ebp)
	fstps	-36(%ebp)
	flds	-32(%ebp)
	fmuls	-16(%ebp)
	fstps	-40(%ebp)
	flds	-32(%ebp)
	fmuls	-20(%ebp)
	fstps	-44(%ebp)
	flds	-36(%ebp)
	fmuls	-16(%ebp)
	fstps	-48(%ebp)
	flds	-36(%ebp)
	fmuls	-20(%ebp)
	fstps	-52(%ebp)
	flds	-40(%ebp)
	fmuls	-20(%ebp)
	fstps	-56(%ebp)
	flds	-28(%ebp)
	fmuls	-12(%ebp)
	fstps	-60(%ebp)
	flds	-28(%ebp)
	fmuls	-16(%ebp)
	fstps	-64(%ebp)
	flds	-28(%ebp)
	fmuls	-20(%ebp)
	fstps	-68(%ebp)
	flds	-36(%ebp)
	fmuls	-12(%ebp)
	fadds	-24(%ebp)
	movl	12(%ebp), %eax
	fstps	(%eax)
	flds	-48(%ebp)
	fadds	-68(%ebp)
	movl	12(%ebp), %eax
	fstps	4(%eax)
	flds	-52(%ebp)
	fsubs	-64(%ebp)
	movl	12(%ebp), %eax
	fstps	8(%eax)
	flds	-48(%ebp)
	fsubs	-68(%ebp)
	movl	12(%ebp), %eax
	fstps	16(%eax)
	flds	-40(%ebp)
	fmuls	-16(%ebp)
	fadds	-24(%ebp)
	movl	12(%ebp), %eax
	fstps	20(%eax)
	flds	-56(%ebp)
	fadds	-60(%ebp)
	movl	12(%ebp), %eax
	fstps	24(%eax)
	flds	-52(%ebp)
	fadds	-64(%ebp)
	movl	12(%ebp), %eax
	fstps	32(%eax)
	flds	-56(%ebp)
	fsubs	-60(%ebp)
	movl	12(%ebp), %eax
	fstps	36(%eax)
	flds	-44(%ebp)
	fmuls	-20(%ebp)
	fadds	-24(%ebp)
	movl	12(%ebp), %eax
	fstps	40(%eax)
	movl	12(%ebp), %eax
	fld1
	fstps	60(%eax)
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	(%edx), %ecx
	movl	%ecx, (%eax)
	movl	4(%edx), %ecx
	movl	%ecx, 4(%eax)
	movl	8(%edx), %ecx
	movl	%ecx, 8(%eax)
	movl	12(%edx), %ecx
	movl	%ecx, 12(%eax)
	movl	16(%edx), %ecx
	movl	%ecx, 16(%eax)
	movl	20(%edx), %ecx
	movl	%ecx, 20(%eax)
	movl	24(%edx), %ecx
	movl	%ecx, 24(%eax)
	movl	28(%edx), %ecx
	movl	%ecx, 28(%eax)
	movl	32(%edx), %ecx
	movl	%ecx, 32(%eax)
	movl	36(%edx), %ecx
	movl	%ecx, 36(%eax)
	movl	40(%edx), %ecx
	movl	%ecx, 40(%eax)
	movl	44(%edx), %ecx
	movl	%ecx, 44(%eax)
	movl	48(%edx), %ecx
	movl	%ecx, 48(%eax)
	movl	52(%edx), %ecx
	movl	%ecx, 52(%eax)
	movl	56(%edx), %ecx
	movl	%ecx, 56(%eax)
	movl	60(%edx), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE25:
	.globl	_matrix4f_scale
	.def	_matrix4f_scale;	.scl	2;	.type	32;	.endef
_matrix4f_scale:
LFB26:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	16(%ebp), %eax
	flds	(%eax)
	movl	12(%ebp), %eax
	fstps	(%eax)
	movl	16(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	fstps	16(%eax)
	movl	16(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	fstps	32(%eax)
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	(%edx), %ecx
	movl	%ecx, (%eax)
	movl	4(%edx), %ecx
	movl	%ecx, 4(%eax)
	movl	8(%edx), %ecx
	movl	%ecx, 8(%eax)
	movl	12(%edx), %ecx
	movl	%ecx, 12(%eax)
	movl	16(%edx), %ecx
	movl	%ecx, 16(%eax)
	movl	20(%edx), %ecx
	movl	%ecx, 20(%eax)
	movl	24(%edx), %ecx
	movl	%ecx, 24(%eax)
	movl	28(%edx), %ecx
	movl	%ecx, 28(%eax)
	movl	32(%edx), %ecx
	movl	%ecx, 32(%eax)
	movl	36(%edx), %ecx
	movl	%ecx, 36(%eax)
	movl	40(%edx), %ecx
	movl	%ecx, 40(%eax)
	movl	44(%edx), %ecx
	movl	%ecx, 44(%eax)
	movl	48(%edx), %ecx
	movl	%ecx, 48(%eax)
	movl	52(%edx), %ecx
	movl	%ecx, 52(%eax)
	movl	56(%edx), %ecx
	movl	%ecx, 56(%eax)
	movl	60(%edx), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE26:
	.section .rdata,"dr"
LC6:
	.ascii "Not implemented yet\0"
	.text
	.globl	_matrix4f_transpose
	.def	_matrix4f_transpose;	.scl	2;	.type	32;	.endef
_matrix4f_transpose:
LFB27:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$LC6, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE27:
	.globl	_matrix4f_multiply
	.def	_matrix4f_multiply;	.scl	2;	.type	32;	.endef
_matrix4f_multiply:
LFB28:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$72, %esp
	leal	-64(%ebp), %eax
	fld1
	fstps	4(%esp)
	movl	%eax, (%esp)
	call	_matrix4f_diagonal
	movl	8(%ebp), %eax
	flds	(%eax)
	movl	12(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	16(%eax)
	movl	12(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	32(%eax)
	movl	12(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	48(%eax)
	movl	12(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-64(%ebp)
	movl	8(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	20(%eax)
	movl	12(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	36(%eax)
	movl	12(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	52(%eax)
	movl	12(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-60(%ebp)
	movl	8(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	24(%eax)
	movl	12(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	40(%eax)
	movl	12(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	56(%eax)
	movl	12(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-56(%ebp)
	movl	8(%ebp), %eax
	flds	12(%eax)
	movl	12(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	28(%eax)
	movl	12(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	44(%eax)
	movl	12(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	60(%eax)
	movl	12(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-52(%ebp)
	movl	8(%ebp), %eax
	flds	(%eax)
	movl	12(%ebp), %eax
	flds	16(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	16(%eax)
	movl	12(%ebp), %eax
	flds	20(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	32(%eax)
	movl	12(%ebp), %eax
	flds	24(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	48(%eax)
	movl	12(%ebp), %eax
	flds	28(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-48(%ebp)
	movl	8(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	flds	16(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	20(%eax)
	movl	12(%ebp), %eax
	flds	20(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	36(%eax)
	movl	12(%ebp), %eax
	flds	24(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	52(%eax)
	movl	12(%ebp), %eax
	flds	28(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-44(%ebp)
	movl	8(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	flds	16(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	24(%eax)
	movl	12(%ebp), %eax
	flds	20(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	40(%eax)
	movl	12(%ebp), %eax
	flds	24(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	56(%eax)
	movl	12(%ebp), %eax
	flds	28(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-40(%ebp)
	movl	8(%ebp), %eax
	flds	12(%eax)
	movl	12(%ebp), %eax
	flds	16(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	28(%eax)
	movl	12(%ebp), %eax
	flds	20(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	44(%eax)
	movl	12(%ebp), %eax
	flds	24(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	60(%eax)
	movl	12(%ebp), %eax
	flds	28(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-36(%ebp)
	movl	8(%ebp), %eax
	flds	(%eax)
	movl	12(%ebp), %eax
	flds	32(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	16(%eax)
	movl	12(%ebp), %eax
	flds	36(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	32(%eax)
	movl	12(%ebp), %eax
	flds	40(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	48(%eax)
	movl	12(%ebp), %eax
	flds	44(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-32(%ebp)
	movl	8(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	flds	32(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	20(%eax)
	movl	12(%ebp), %eax
	flds	36(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	36(%eax)
	movl	12(%ebp), %eax
	flds	40(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	52(%eax)
	movl	12(%ebp), %eax
	flds	44(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-28(%ebp)
	movl	8(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	flds	32(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	24(%eax)
	movl	12(%ebp), %eax
	flds	36(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	40(%eax)
	movl	12(%ebp), %eax
	flds	40(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	56(%eax)
	movl	12(%ebp), %eax
	flds	44(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-24(%ebp)
	movl	8(%ebp), %eax
	flds	12(%eax)
	movl	12(%ebp), %eax
	flds	32(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	28(%eax)
	movl	12(%ebp), %eax
	flds	36(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	44(%eax)
	movl	12(%ebp), %eax
	flds	40(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	60(%eax)
	movl	12(%ebp), %eax
	flds	44(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-20(%ebp)
	movl	8(%ebp), %eax
	flds	(%eax)
	movl	12(%ebp), %eax
	flds	48(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	16(%eax)
	movl	12(%ebp), %eax
	flds	52(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	32(%eax)
	movl	12(%ebp), %eax
	flds	56(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	48(%eax)
	movl	12(%ebp), %eax
	flds	60(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-16(%ebp)
	movl	8(%ebp), %eax
	flds	4(%eax)
	movl	12(%ebp), %eax
	flds	48(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	20(%eax)
	movl	12(%ebp), %eax
	flds	52(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	36(%eax)
	movl	12(%ebp), %eax
	flds	56(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	52(%eax)
	movl	12(%ebp), %eax
	flds	60(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-12(%ebp)
	movl	8(%ebp), %eax
	flds	8(%eax)
	movl	12(%ebp), %eax
	flds	48(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	24(%eax)
	movl	12(%ebp), %eax
	flds	52(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	40(%eax)
	movl	12(%ebp), %eax
	flds	56(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	56(%eax)
	movl	12(%ebp), %eax
	flds	60(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-8(%ebp)
	movl	8(%ebp), %eax
	flds	12(%eax)
	movl	12(%ebp), %eax
	flds	48(%eax)
	fmulp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	28(%eax)
	movl	12(%ebp), %eax
	flds	52(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	44(%eax)
	movl	12(%ebp), %eax
	flds	56(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	8(%ebp), %eax
	flds	60(%eax)
	movl	12(%ebp), %eax
	flds	60(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-4(%ebp)
	movl	8(%ebp), %eax
	movl	-64(%ebp), %edx
	movl	%edx, (%eax)
	movl	-60(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-56(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-52(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	-48(%ebp), %edx
	movl	%edx, 16(%eax)
	movl	-44(%ebp), %edx
	movl	%edx, 20(%eax)
	movl	-40(%ebp), %edx
	movl	%edx, 24(%eax)
	movl	-36(%ebp), %edx
	movl	%edx, 28(%eax)
	movl	-32(%ebp), %edx
	movl	%edx, 32(%eax)
	movl	-28(%ebp), %edx
	movl	%edx, 36(%eax)
	movl	-24(%ebp), %edx
	movl	%edx, 40(%eax)
	movl	-20(%ebp), %edx
	movl	%edx, 44(%eax)
	movl	-16(%ebp), %edx
	movl	%edx, 48(%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 52(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 56(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 60(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE28:
	.globl	_matrix4f_multiply_vec4f
	.def	_matrix4f_multiply_vec4f;	.scl	2;	.type	32;	.endef
_matrix4f_multiply_vec4f:
LFB29:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	12(%ebp), %eax
	flds	4(%eax)
	movl	16(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	20(%eax)
	movl	16(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	40(%eax)
	movl	16(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	60(%eax)
	movl	16(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-16(%ebp)
	movl	12(%ebp), %eax
	flds	4(%eax)
	movl	16(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	20(%eax)
	movl	16(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	40(%eax)
	movl	16(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	60(%eax)
	movl	16(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-12(%ebp)
	movl	12(%ebp), %eax
	flds	4(%eax)
	movl	16(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	20(%eax)
	movl	16(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	40(%eax)
	movl	16(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	60(%eax)
	movl	16(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-8(%ebp)
	movl	12(%ebp), %eax
	flds	4(%eax)
	movl	16(%ebp), %eax
	flds	(%eax)
	fmulp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	20(%eax)
	movl	16(%ebp), %eax
	flds	4(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	40(%eax)
	movl	16(%ebp), %eax
	flds	8(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	movl	12(%ebp), %eax
	flds	60(%eax)
	movl	16(%ebp), %eax
	flds	12(%eax)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstps	-4(%ebp)
	movl	8(%ebp), %eax
	movl	-16(%ebp), %edx
	movl	%edx, (%eax)
	movl	-12(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-8(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-4(%ebp), %edx
	movl	%edx, 12(%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE29:
	.globl	_matrix4f_value
	.def	_matrix4f_value;	.scl	2;	.type	32;	.endef
_matrix4f_value:
LFB30:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$64, %esp
	movl	8(%ebp), %eax
	flds	(%eax)
	fstps	-64(%ebp)
	movl	8(%ebp), %eax
	flds	16(%eax)
	fstps	-60(%ebp)
	movl	8(%ebp), %eax
	flds	32(%eax)
	fstps	-56(%ebp)
	movl	8(%ebp), %eax
	flds	48(%eax)
	fstps	-52(%ebp)
	movl	8(%ebp), %eax
	flds	4(%eax)
	fstps	-48(%ebp)
	movl	8(%ebp), %eax
	flds	20(%eax)
	fstps	-44(%ebp)
	movl	8(%ebp), %eax
	flds	36(%eax)
	fstps	-40(%ebp)
	movl	8(%ebp), %eax
	flds	52(%eax)
	fstps	-36(%ebp)
	movl	8(%ebp), %eax
	flds	8(%eax)
	fstps	-32(%ebp)
	movl	8(%ebp), %eax
	flds	24(%eax)
	fstps	-28(%ebp)
	movl	8(%ebp), %eax
	flds	40(%eax)
	fstps	-24(%ebp)
	movl	8(%ebp), %eax
	flds	56(%eax)
	fstps	-20(%ebp)
	movl	8(%ebp), %eax
	flds	12(%eax)
	fstps	-16(%ebp)
	movl	8(%ebp), %eax
	flds	28(%eax)
	fstps	-12(%ebp)
	movl	8(%ebp), %eax
	flds	44(%eax)
	fstps	-8(%ebp)
	movl	8(%ebp), %eax
	flds	60(%eax)
	fstps	-4(%ebp)
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE30:
	.section .rdata,"dr"
	.align 4
LC3:
	.long	1073741824
	.align 4
LC5:
	.long	-1073741824
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_tan;	.scl	2;	.type	32;	.endef
	.def	_cos;	.scl	2;	.type	32;	.endef
	.def	_sin;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
