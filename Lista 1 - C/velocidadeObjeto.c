#include <stdio.h>

int main(int argc, char const *argv[])
{
    float vInicial, vFinal, aceleracao, tempo;
    printf("Digite a velocidadeInicial: ");
    scanf("%f", &vInicial);   
    printf("Digite a aceleracao: ");
    scanf("%f", &aceleracao);   
    printf("Digite o tempo: ");
    scanf("%f", &tempo);

    vFinal = vInicial + (aceleracao * tempo);
    printf("A velocidade final é de %.2f", vFinal);   
    return 0;
}