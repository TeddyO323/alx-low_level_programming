global	main

main:
			mov	rax, 1
			mov	rdi, 1
			mov	rsi, message
			mov	rdx, 13
			syscall
			mov	rax, 60
			xor	rdi, rdi
			syscall

	section	.data
	section	.text

message:db"Hello, World", 0xa
