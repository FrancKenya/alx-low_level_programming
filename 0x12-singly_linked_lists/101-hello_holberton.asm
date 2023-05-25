global    main
extern    printf

section .data
    format db `Hello, Holberton\n`,0

section .txt
main:
	mov edi, format
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
