#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    double x, e_x = 1, termo = 1;
    printf("Digite a quantidade de termos na serie: ");
    scanf("%d", &n);
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    for (i = 1; i <= n; i++) {
        termo *= (x / i);
        e_x += termo;
    }
    printf("O valor de e elevado a com %d termos eh %.15lf", n, e_x);
    return 0;
}