#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;
        printf("Quantos niveis você completou?: ");
        scanf("%f", &n);

    float *ptr = (float*)calloc(n, sizeof(float));
    if (ptr == NULL) {
        printf("Erro de memoria!\n");
    return 1;
}
float tempototal = 0;
    for (int i = 0; i<n; i++) {
        printf("Digite o tempo do nivel %d: ", i + 1);
        scanf("%f", ptr + i);
    tempototal += *(ptr + i);
}
float mediatempo = tempototal / n;

float maior = ptr[0];
float menor = ptr[0];
    for (int i = 0;i<n; i++) {
        if (ptr[i] > maior) maior = ptr[i];
        if (ptr[i] < menor) menor = ptr[i];
} 
printf("O maior tempo foi: %.2f\n", maior);
printf("O menor tempo foi: %.2f\n", menor);
printf("A média de tempo foi: %.2f\n", mediatempo);

free(ptr); 
return 0;
}