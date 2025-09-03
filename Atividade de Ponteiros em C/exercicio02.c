#include <stdio.h>

int main() {
    int idade;
    int *ptr = &idade;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Idade digitada: %d\n", *ptr);
    printf("Endereco em memoria: %p\n", ptr);

    return 0;
}