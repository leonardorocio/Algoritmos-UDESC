#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, i;
    float somatorio = 0, revezar = 1.0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &k);
    for (i = 1; i <= k; i++) {
        somatorio += revezar / i;
        revezar = -revezar;
    }
    printf("O valor do logaritmo natural de 2 com %d termos eh %f", k, somatorio);
    return 0;
}
