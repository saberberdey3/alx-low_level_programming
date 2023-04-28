section .data
    hello db 'Hello, Holberton!', 0Ah ; the string to print

section .text
    global _start ; the entry point for the program

_start:
    ; write the string to stdout
    mov eax, 4 ; the system call for write
    mov ebx, 1 ; file descriptor for stdout
    mov ecx, hello ; the string to print
    mov edx, 16 ; the length of the string
    int 0x80 ; call the kernel

    ; exit the program
    mov eax, 1 ; the system call for exit
    xor ebx, ebx ; the exit code (0)
    int 0x80 ; call the kernel

