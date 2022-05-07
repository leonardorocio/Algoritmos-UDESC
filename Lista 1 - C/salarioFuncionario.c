#include <stdio.h>

int main(int argc, char const *argv[])
{
    float qtdHoras, valorHora, salario;
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &qtdHoras);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    salario = qtdHoras * valorHora * 30;
    printf("O salário mensal de fulano é de %.2f", salario);
    return 0;
}
