section .data
    hello_msg db "Hello, Holberton", 0x0A ; Null-terminated string with a new line

section .text
    global _start

_start:
    ; Write system call (syscall number 1) to stdout (file descriptor 1)
    mov rax, 1
    mov rdi, 1
    mov rsi, hello_msg
    mov rdx, 16 ; The length of the message
    syscall

    ; Exit system call (syscall number 60)
    mov rax, 60
    xor rdi, rdi ; Return 0 as the exit status
    syscall

