#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, i, soma = 0;
    printf("Digite o numero a ser verificado: ");
    scanf("%d", &numero);
    for(i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    if (soma / 2 == numero) {
        printf("O numero eh perfeito");
    } else {
        printf("O numero nao eh perfeito");
    }
    return 0;
}
