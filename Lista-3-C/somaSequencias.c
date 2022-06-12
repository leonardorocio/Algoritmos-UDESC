#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float somaFracoes = 0, somaIntercalada = 0, j, k;
    printf("Digite a quantidades de termos para as sequencias: ");
    scanf("%d", &n);
    for (i = 0, j = 1.0, k = 2.0; i < n; i++, j += 2.0, k += 3.0) {
        somaFracoes += (j / k); 
    }
    for (i = 1, j = 1; i <= n; i++) {
        somaIntercalada += (j / i);
        j = -j;
    }
    printf("A soma da primeira sequencia com %d termos eh de %.2f\n", n, somaFracoes);
    printf("A soma da segunda sequencia com %d termos eh de %.2f\n", n, somaIntercalada);
    return 0;
}
