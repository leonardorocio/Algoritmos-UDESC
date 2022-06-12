#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, altura, soma = 0, maior = 0, qtdMulheres = 0;
    char sexo;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite a altura (cm) e o sexo da pessoa (m,f): ");
        scanf("%d %c", &altura, &sexo);
        if (sexo == 'm' && altura > 0) {
            if (altura > maior) {
                maior = altura;
            }
        } else if (sexo == 'f' && altura > 0) {
            soma += altura;
            qtdMulheres++;
        } else {
            printf("Dados dessa pessoa não serão contados, pois são inválidos\n");
        }
    }
    printf("A maior altura dos homens eh %d cm\n", maior);
    printf("A media de altura das mulheres eh %d", soma / qtdMulheres);
    return 0;
}
