global main
extern printf

section .data
    hello_msg db "Hello, Holberton", 0x0a, 0

section .text
main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello_msg]
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
