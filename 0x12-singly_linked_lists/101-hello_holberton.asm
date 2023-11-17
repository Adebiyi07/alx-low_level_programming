section .data
	hello db `Hello, Holberton\n`,0

section .text
	global main
	extern printf

main:
	mov rdi, hello
	xor rax, rax
	call printf
	mov eax, 0x60
	xor edi, edi
	syscall
