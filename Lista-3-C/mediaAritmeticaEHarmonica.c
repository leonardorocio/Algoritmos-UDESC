#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float valor, somaArit, mediaArit, mediaHarm, somaHarm = 0;
    printf("Digite uma quantidade de numeros: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite um numero para a media: ");
        scanf("%f", &valor);
        if (valor >= 0) {
            somaArit += valor;
            somaHarm += (1.0 / valor);
        }
    }
    mediaArit = somaArit / n;
    mediaHarm = n / somaHarm;
    printf("A mehdia harmonica eh: %.2f\n", mediaHarm);
    printf("A mehdia aritmetica eh: %.2f", mediaArit);
    return 0;
}
