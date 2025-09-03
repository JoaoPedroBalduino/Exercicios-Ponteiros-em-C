#include <stdio.h>

int main() {
    float notas[3][3];
    float *ptr = &notas[0][0];
    float somaDiagonal = 0;

    printf("Digite as notas (3 alunos x 3 provas):\n");
    for (int i = 0; i < 9; i++) {
        scanf("%f", ptr + i);
    }

    printf("\nNotas digitadas:\n");
    for (int i = 0; i < 9; i++) {
        printf("%.2f ", *(ptr + i));
        if ((i + 1) % 3 == 0) printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        somaDiagonal += *(ptr + i * 3 + i);
    }

    printf("\nSoma da diagonal principal: %.2f\n", somaDiagonal);

    return 0;
}
