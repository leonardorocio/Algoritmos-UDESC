#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15

int main(int argc, char const *argv[])
{
    srand(time(0));
    int v[MAX], i, j;
    for (i = 0; i < MAX; i++) {
        v[i] = rand() % 1000 + 1;
        printf("%d: %d\n", i, v[i]);
    }
    int x;
    scanf("%d", &x);
    for (i = 0; i < MAX; i++) {
        if (v[i] == x) {
            printf("Indice %d: %d", i, x);
        }
    }
    return 0;
}
