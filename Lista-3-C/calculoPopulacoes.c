#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anos = 0;
    float populacaoA, populacaoB, taxaA, taxaB;
    printf("Digite a populacao e taxa da cidade A: ");
    scanf("%f%f", &populacaoA, &taxaA);
    printf("Digite a populacao e taxa da cidade B: ");
    scanf("%f%f", &populacaoB, &taxaB);
    if (populacaoB > populacaoA && taxaB > taxaA) {
        printf("A cidade A nunca irá ultrapassar a cidade B");
    } else {
        while (populacaoA < populacaoB) {
            populacaoA += populacaoA * (taxaA / 100);
            populacaoB += populacaoB * (taxaB / 100);
            anos++;
        }
        printf("Demorou %d anos para que A ultrapassasse B", anos);
    }
    return 0;
}
