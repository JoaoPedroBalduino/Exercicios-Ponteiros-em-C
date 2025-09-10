#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;
        printf("Quantos livros quer registrar? ");
        scanf("%f", &n);

    float *ptr = (float *)calloc(n, sizeof(float));
        if (ptr == NULL) {
            printf("Erro de memoria!\n");
        return 1;
}
float totalpreco = 0;
for (int i = 0; i<n; i++)   {
    printf("Digite o valor do livro %d: ", i + 1);
    scanf("%f", ptr + i);
    totalpreco += *(ptr + i);
}
float media = totalpreco / n;
printf("O valor total dos livros é: %.2f\n", totalpreco);
printf("O valor médio dos livros é: %.2f\n", media);

    free(ptr);
    return 0;
}