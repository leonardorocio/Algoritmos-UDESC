#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int lin, col, i, j, soma_pares = 0, conta_pares = 0;
    float media;
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de linhas e colunas da matriz: ");
    scanf("%d%d", &lin, &col);
    int mat[lin][col];
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i][j] = rand() % 1000 + 1;
            printf("%4d", mat[i][j]);
            if (mat[i][j] % 2 == 0) {
                soma_pares += mat[i][j];
                conta_pares++;
            }
        }
        printf("\n");
    }
    media = (float) soma_pares / (float) conta_pares;
    printf("A média dos pares dessa matriz é: %.2f", media);
    return 0;
}
