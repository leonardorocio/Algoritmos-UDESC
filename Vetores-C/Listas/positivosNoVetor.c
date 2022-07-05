#include <stdio.h>

#define MAX 20

int main(int argc, char const *argv[])
{
    int v[MAX], i, positivos[MAX], count;
    printf("Digite 20 valores para o vetor: ");
    for (i = 0, count = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        if (v[i] >= 0) {
            positivos[count] = v[i];
            count++;
        }
    }
    printf("Os valores positivos são: ");
    for (i = 0; i < count; i++) {
        printf("%d ", positivos[i]);
    }
    return 0;
}
