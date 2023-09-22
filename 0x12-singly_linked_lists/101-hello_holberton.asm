section .data
    hello db "Hello, Holberton", 10 ; The newline character (10) is added for a new line

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, hello ; Load the address of the hello string into rdi
    call printf   ; Call the printf function

    ; Exit the program
    mov rax, 60  ; syscall number for exit (60)
    xor rdi, rdi ; Exit status: 0
    syscall
