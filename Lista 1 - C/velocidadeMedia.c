#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tempo, distancia, velocidadeMedia;
    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Digite a tempo percorrido: ");
    scanf("%f", &tempo);
    velocidadeMedia = distancia / tempo;

    printf("A velocidade média é de %.2f km/h.", velocidadeMedia);
    return 0;
}
