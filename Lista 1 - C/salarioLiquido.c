#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario = 1000;
    float IR = salario * 0.15;
    float INSS = salario * 0.11;
    float sindicato = salario * 0.03;
    float salarioLiquidos = salario - IR - INSS - sindicato;

    printf("Salario Bruto: R$ %.2f\n" 
            "(-) IR (15p/Cento): R$ %.2f\n"
            "(-) INSS (11p/Cento: R$ %.2f\n"
            "(-) Sindicato (3p/cento: R$ %.2f\n"
            "Salario Liquido: R$ %.2f", salario, IR, INSS, sindicato, salarioLiquidos);    
    return 0;
}
