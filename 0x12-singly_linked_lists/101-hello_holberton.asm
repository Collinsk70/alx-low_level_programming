extern printf

section .data
    hello_msg db "Hello, Holberton", 0   ; Null-terminated string without a new line
    format   db "%s", 10, 0             ; Format string for printf with a new line

section .text
    global main

main:
    ; Prologue
    push rbp

    ; Prepare arguments for printf
    mov rdi, format     ; Format specifier
    mov rsi, hello_msg  ; Address of the message

    ; Call printf
    xor rax, rax        ; Clear rax to indicate no vector registers used for varargs
    call printf

    ; Epilogue
    pop rbp
    xor rax, rax        ; Clear rax to indicate successful exit
    ret

