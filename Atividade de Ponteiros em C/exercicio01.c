#include <stdio.h>

int main() {
    int cofrinho = 150; // valor guardado
    int *ptr;           // ponteiro para inteiro

    ptr = &cofrinho; // ponteiro recebe o endereço da variável

    printf("Valor no cofrinho: %d\n", *ptr);   // acessa valor via ponteiro
    printf("Endereco do cofrinho: %p\n", ptr); // mostra endereço

    return 0;
}
