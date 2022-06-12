#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, valor, maior, menor, i;
    printf("Digite a quantidade de N da sequencia: ");
    scanf("%d", &n);
    printf("Digite o elemento de numero 1: ");
    scanf("%d", &maior);
    menor = maior;
    for(i = 1; i < n; i++) {
        printf("Digite o elemento de numero %d: ", i+1);
        scanf("%d", &valor);
        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
    }
    printf("A amplitude da sequencia eh %d", maior - menor);  
    return 0;
}
