#include <stdio.h>

#define MAX 10

int main(int argc, char const *argv[])
{
    int a[MAX], b[MAX], c[MAX], i;
    printf("Digite 10 valores para cada vetor: \n");
    printf("Vetor A:\n");
    for (i = 0; i < MAX * 2; i++) {
        if (i == MAX)
            printf("Vetor B:\n");
        if (i >= MAX) {
            scanf("%d", &b[i - MAX]);
        } else {
            scanf("%d", &a[i]);
        }
    }
    for(i = 0; i < MAX; i++) {
        c[i] = a[i] * b[i];
        printf("%d ", c[i]);
    }
    return 0;
}
