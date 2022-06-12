#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, qtdSim = 0, qtdNao = 0;
    float percentualMulheres, percentualHomens, mulheresSim = 0, homensNao = 0, mulheres = 0, homens = 0;
    char sexo, resposta;
    printf("Digite a quantidade de pessoas a serem entrevistadas: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Digite o sexo (m,f): ");
        scanf(" %c", &sexo);
        printf("Digite o voto da pessoa (s,n): ");
        scanf(" %c", &resposta);
        if (sexo == 'm') {
            if (resposta == 'n') {
                homensNao++;
            }
            homens++;
        } else if (sexo == 'f') {
            if (resposta == 's') {
                mulheresSim++;
            }
            mulheres++;
        }
        if (resposta == 's') qtdSim++;
        else if (resposta == 'n') qtdNao++;
    }
    printf("Numero de pessoas que responderam sim foi: %d\n", qtdSim);
    printf("Numero de pessoas que responderam nao foi: %d\n", qtdNao);
    percentualHomens = homens > 0 ? (homensNao / homens) * 100 : 0;
    percentualMulheres = mulheres > 0 ? (mulheresSim / mulheres) * 100 : 0;
    printf("Percentual de homens que responderam nao foi: %.2f\n", percentualHomens);
    printf("Percentual de mulheres que responderam nao foi: %.2f", percentualMulheres);
    return 0;
}
