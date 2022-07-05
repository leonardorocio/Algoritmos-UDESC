#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8

int main(int argc, char const *argv[])
{
    srand(time(0));
    int v[MAX], i, j;
    for (i = 0; i < MAX; i++) {
        v[i] = rand();
        printf("%d: %d\n", i, v[i]);
    }
    int aux;
    for (j = MAX - 1; j > 0; j--) {
        // printf("\n[%d] ", j);
        for (i = 0; i < j; i++) {
            // printf("%d ", i);
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
    return 0;
}
