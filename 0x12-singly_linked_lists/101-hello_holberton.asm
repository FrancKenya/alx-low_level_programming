section .dt
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0 ; %s: string, 10: newline, 0: null terminator
section .txt
	extern printf

global main
main:
	sub rsp, 8
	mov rdi, format
	mov rsi, hello
	xor eax, eax
	call printf
	add rsp, 8

	mov eax, 60  ; exit system call number
	xor edi, edi ; exit status 0
	syscall
