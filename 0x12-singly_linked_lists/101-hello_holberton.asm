section .data
    message db 'Hello, Holberton',0

section .text
    global main
    extern printf

main:
    ; Call the printf function with the message
    push message
    call printf

    ; Call the printf function with the new line character
    push message
    call printf

    ; Exit the program
    xor eax, eax
    ret


