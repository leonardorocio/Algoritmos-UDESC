#include <stdio.h>

#define MAX 20

int main(int argc, char const *argv[])
{
    int v[MAX], i, somaPares = 0;
    printf("Digite 20 valores para o vetor: ");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
            somaPares++;
    }
    printf("Total de Pares no Vetor: %d", somaPares);
    return 0;
}

