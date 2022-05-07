#include <stdio.h>

int main(int argc, char const *argv[])
{
    float raio, altura, volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = (3.14 * raio * raio) * altura;

    printf("O volume desse cilindro é de %.2f m³", volume);
    return 0;
}
