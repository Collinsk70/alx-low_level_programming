section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global _start

_start:
    ; Call printf to print the message
    mov rdi, format
    mov rsi, hello_msg
    xor rax, rax ; Clear rax to indicate no vector registers used for varargs
    call printf

    ; Exit the program
    xor rdi, rdi
    call exit

section .bss
    ; Reserve space for the return value of printf
    resb 8

