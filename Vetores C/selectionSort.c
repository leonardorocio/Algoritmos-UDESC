#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

int main(int argc, char const *argv[])
{
    srand(time(0));
    int v[MAX], i, permutes = 0;
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        // v[i] = rand() % 1000 + 1;
        // printf("Elemento %d: %d\n", i, v[i]);
    }
    int aux, j;
    for (i = 0; i < MAX; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                permutes++;
            }
        }
    }
    // printf("Ordenado:\n");
    // for (i = 0; i < MAX; i++) {
    //     printf("%d\n", v[i]);
    // }
    printf("Permutações: %d", permutes);
    return 0;
}
