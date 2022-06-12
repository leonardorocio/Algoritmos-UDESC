#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, i, soma = 0, flag;
    printf("Digite dois valores: ");
    scanf("%d%d", &x, &y);
    if (x > y) {
        flag = x;
        x = y;
        y = flag;
    }
    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("A soma dos impares entre %d e %d eh %d", x, y, soma);
    return 0;
}
