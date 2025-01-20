section .data
    msg db 'Hello, ALX', 10, 0

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, msg
    xor rax, rax
    call printf
    pop rbp
    ret
