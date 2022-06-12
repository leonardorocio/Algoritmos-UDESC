#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, fat = 1;
    float somatorio = 1.0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        fat *= i;
        somatorio += (1.0 / fat);
    }
    printf("O valor de e com %d termos eh %.15lf", n, somatorio);
    return 0;
}
