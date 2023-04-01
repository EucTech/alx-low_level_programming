section .data
	nl db 10, 0 
	msg db "Hello, Holberton", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp
	mov rdi, msg
	xor eax, eax
	call printf
	mov rdi, nl
	call printf
	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
