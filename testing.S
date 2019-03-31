.intel_syntax noprefix
.text
.global friendly
friendly: 
	lea %eax, [%esp+4]
	mov %eax, [%eax]
	mov %ecx, 15
	shl %eax, cl

	ret
