.intel_syntax noprefix
.text
.global friendly
friendly: 
	lea %eax,[%esp+4]
	mov %eax, [%eax]

	mov %ecx [%esp+8]
	add %eax, %ecx

	ret
