#include <stdio.h>

int main() {
    float notas[6];
    float *ptr = notas;

    for (int i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", ptr + i);
    }

    printf("\nNotas invertidas:\n");
    for (int i = 5; i >= 0; i--) {
        printf("Aluno %d: %.2f\n", i + 1, *(ptr + i));
    }

    return 0;
}
