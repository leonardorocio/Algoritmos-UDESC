#include <stdio.h>

int main(int argc, char const *argv[])
{
    float grausC;
    int inicio, fim, grausF;
    printf("Digite o intervalo inteiro (inicio, fim) de temperatura: ");
    scanf("%d%d", &inicio, &fim);
    printf("Temperatura em F || Temperatura em C\n");
    for(grausF = inicio; grausF <= fim; grausF += 2) {
        grausC = (grausF - 32) * (5.0 / 9.0);
        printf("%d || %.2f\n", grausF, grausC);
    }
    return 0;
}