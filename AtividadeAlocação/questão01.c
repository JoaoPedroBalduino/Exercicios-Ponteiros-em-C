#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Quantos jogadores vão participar? ");
    scanf("%d", &n);

    int *pontos = (int *)malloc(n * sizeof(int));
    if (pontos == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }
    int totalpontos = 0;
    for (int i = 0; i < n; i++) {
        printf("Pontos do jogador %d: ", i + 1);
        scanf("%d", pontos + i);
        totalpontos += *(pontos + i);
    }
    int max = pontos[0];
    int min = pontos[0];
    for (int i = 1; i < n; i++) {
        if (pontos[i] > max) max = pontos[i];
        if (pontos[i] < min) min = pontos[i];
}
printf("Pontuação máxima: %d\n", max);
printf("Pontuação mínima: %d\n", min);
    printf("Total de pontos: %d\n", totalpontos);
    free(pontos);
    return 0;


}