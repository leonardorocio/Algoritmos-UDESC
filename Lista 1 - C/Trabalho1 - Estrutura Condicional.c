#include <stdio.h>
#include <stdlib.h>

// Universidade do Estado de Santa Catarina
// Nome: Leonardo Fagundes Rócio
// Disciplina: AGT0001 - TADS
// Professor: Rui Jorge Tramontim Junior
// Algoritmo para descobrir o dia da semana baseado em dia, mês e ano.

int main(int argc, char const *argv[])
{
    int dia, mes, ano;
    printf("Digite o dia, mes e ano: ");
    scanf("%i%i%i", &dia, &mes, &ano);
    // Validação de entrada
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1800 && ano <= 2199)) {
        int algarismosAno = (ano % 100); // Passo 1
        int algarismosDivididos = algarismosAno / 4; // Passo 2
        int anoBissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0); // Verificar se é ano bissexto
        int numeroChaveMes;
        switch (mes) // Passo 3
        {
        case 1:
            numeroChaveMes = anoBissexto ? 0 : 1;
            break;
        case 2:
            numeroChaveMes = anoBissexto ? 3 : 4;
            break;
        case 3:
        case 11:
            numeroChaveMes = 4;
            break;
        case 4:
        case 7:
            numeroChaveMes = 0;
            break;
        case 5:
            numeroChaveMes = 2;
            break;
        case 6:
            numeroChaveMes = 5;
            break;
        case 8:
            numeroChaveMes = 3;
            break;
        case 9:
        case 12:
            numeroChaveMes = 6;
            break;
        case 10:
            numeroChaveMes = 1;
            break;
        }
        int numeroChaveSeculo;
        switch (ano) // Passo 4
        {
        case 1800 ... 1899:
            numeroChaveSeculo = 2;
            break;
        case 1900 ... 1999:
            numeroChaveSeculo = 0;
            break;
        case 2000 ... 2099:
            numeroChaveSeculo = 6;
            break;
        case 2100 ... 2199:
            numeroChaveSeculo = 4;
            break;
        }
        int somatorio = algarismosAno + algarismosDivididos + numeroChaveMes + numeroChaveSeculo + dia; // Passo 5 e 6
        int diaDaSemana = somatorio % 7; // Passo 7
        switch (diaDaSemana)
        {
        case 0:
            printf("Sábado");
            break;
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("2º Feira");
            break;
        case 3:
            printf("3º Feira");
            break;
        case 4:
            printf("4º Feira");
            break;
        case 5:
            printf("5º Feira");
            break;
        case 6:
            printf("6º Feira");
            break;
        }
    } else {
        printf("Data inválida");
    }
    return 0;
}
