#include <stdio.h>

#define MAX 30

int main(int argc, char const *argv[])
{
    int v[MAX], i, somaImpares = 0, totalImpares = 0;
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 3 == 0 && v[i] > 10) {
            somaImpares += v[i];
            totalImpares++;
        }
    }
    float media = (float) somaImpares / (float) totalImpares;
    printf("A media eh %.2f", media);
    return 0;
}
