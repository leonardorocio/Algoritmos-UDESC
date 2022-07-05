#include <stdio.h>

#define MAX 30

int main(int argc, char const *argv[])
{
    int v[MAX], i;
    printf("Digite 30 valores: ");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
        if (v[i] == 0)
            v[i] = 1;
    }
    printf("[ ");
    for (i = 0; i < MAX; i++) {
        printf("%d ", v[i]);
    }
    printf("]");
    return 0;
}
