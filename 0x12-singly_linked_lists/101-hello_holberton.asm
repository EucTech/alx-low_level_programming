	global main
	extern puts

msg:	db	"Hello, Holberton",0

main:
	mov	rdi, msg
	call	puts
	mov	rax, 0
	ret
