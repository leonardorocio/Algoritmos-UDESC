#include <stdio.h>

#define MAX 10

int main(int argc, char const *argv[])
{
    int v[MAX], somaTotal = 0, i;
    printf("Digite 30 valores para o vetor: \n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        somaTotal += v[i];
    }
    float mediaTotal = (float) somaTotal / (float) MAX;
    int totalAcimaDaMedia = 0, somaAcimaDaMedia = 0;
    printf("Valores acima da média: \n");
    for (i = 0; i < MAX; i++) {
        if (v[i] > (int) mediaTotal) {
            printf("(Indice, Valor) = %d:%d\n", i, v[i]);
            totalAcimaDaMedia++;
            somaAcimaDaMedia += v[i];
        }
    }
    float porcentagemAcimaDaMedia = ((float) totalAcimaDaMedia / (float) MAX) * 100;
    printf("Total acima da media: %d\n", totalAcimaDaMedia); 
    printf("Soma acima da media: %d\n", somaAcimaDaMedia); 
    printf("Porcentagem acima da media: %.2f", porcentagemAcimaDaMedia); 
    return 0;
}
