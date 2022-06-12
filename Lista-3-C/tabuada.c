#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    return 0;
}