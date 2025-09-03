#include <stdio.h>

int main() {
    int pontos[4][4];
    int *ptr = &pontos[0][0];

    printf("Digite os pontos (4 jogadores x 4 sets):\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", ptr + i);
    }

    printf("\n--- Tabela de pontos ---\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", *(ptr + i));
        if ((i + 1) % 4 == 0) printf("\n");
    }

    int pares = 0, impares = 0;
    for (int i = 0; i < 16; i++) {
        if (*(ptr + i) % 2 == 0) pares++;
        else impares++;
    }
    printf("\nPontos pares: %d | Pontos impares: %d\n", pares, impares);

    int maiorJogador = 0, maiorPontos = 0;
    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += *(ptr + i * 4 + j);
        }
        printf("Total do jogador %d: %d\n", i + 1, soma);
        if (soma > maiorPontos) {
            maiorPontos = soma;
            maiorJogador = i + 1;
        }
    }
    printf("Jogador com maior pontuacao: %d\n", maiorJogador);

    int setMaisDisputado = 0, maiorSet = 0;
    for (int j = 0; j < 4; j++) {
        int soma = 0;
        for (int i = 0; i < 4; i++) {
            soma += *(ptr + i * 4 + j);
        }
        printf("Total do set %d: %d\n", j + 1, soma);
        if (soma > maiorSet) {
            maiorSet = soma;
            setMaisDisputado = j + 1;
        }
    }
    printf("Set mais disputado: %d\n", setMaisDisputado);

    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += *(ptr + i * 4 + j);
        }
        printf("Media do jogador %d: %.2f\n", i + 1, soma / 4.0);
    }

    int maisRegular = 1, menorDiferenca = 9999;
    for (int i = 0; i < 4; i++) {
        int maior = *(ptr + i * 4);
        int menor = *(ptr + i * 4);
        for (int j = 1; j < 4; j++) {
            int valor = *(ptr + i * 4 + j);
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }
        int diferenca = maior - menor;
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            maisRegular = i + 1;
        }
    }
    printf("Jogador mais regular: %d\n", maisRegular);

    return 0;
}
