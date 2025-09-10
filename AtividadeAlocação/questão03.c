#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Quantos personagens ?: ");
    scanf("%d", &n);

    int *vidas = (int*)malloc(n * sizeof(int));
    if (vidas == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    int totalvidas = 0;
    for (int i = 0; i < n; i++){
        printf("Vida do personagem %d: ", i + 1);
        scanf("%d", vidas + i);
        totalvidas += *(vidas + i);
    }
    int mediavidas = totalvidas / n;
    printf("Média de vidas: %d\n", mediavidas);

    printf("Total de vidas: %d\n", totalvidas);
    free(vidas);
    return 0;  
}