#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int** geraMatrizNXN(int ordem) {
    int i;
    int **mat = malloc(sizeof(int*) * ordem);
    for (i = 0; i < ordem; i++) {
        mat[i] = malloc(sizeof(int) * ordem);
    }
    return mat;
}

int** menor(int ordem, int **matriz, int k) {
    int i, j;
    int **mat = geraMatrizNXN(ordem - 1);
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (k != j && i != 0) {
                if (j > k) {
                    mat[i - 1][j - 1] = matriz[i][j];
                } else if (j <= k) {
                    mat[i - 1][j] = matriz[i][j];
                }
            } 
        }
    }
    return mat;
}

int detAte3(int ordem, int **m) {
    int result, positivo, negativo;
    switch (ordem)
    {
    case 1:
        result = m[0][0];
        break; 
    case 2:
        result = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
        break;
    case 3:
        positivo = m[0][0] * m[1][1] * m[2][2] + m[0][2] * m[1][0] * m[2][1] + m[0][1] * m[1][2] * m[2][0];
        negativo = (m[0][2] * m[1][1] * m[2][0] + m[0][0] * m[1][2] * m[2][1] + m[0][1] * m[1][0] * m[2][2]);
        result = positivo - negativo;
    }
    return result;
}

int determinantes(int ordem, int **matriz) {
    if (ordem <= 3) {
        return detAte3(ordem, matriz);
    } else {
        return cofatores(ordem, matriz);
    }
}

int cofatores(int ordem, int **matriz) {
    int i, cofator, soma = 0;
    for (i = 0; i < ordem; i++) {
        cofator = (int) pow(-1.0, i) * determinantes(ordem - 1, menor(ordem, matriz, i));
        soma += matriz[0][i] * cofator;
    }
    return soma;
}


int main(int argc, char const *argv[])
{
    int ordem, i, j;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a ordem da matriz para o calculo do determinante: ");
    scanf("%d", &ordem);
    int **mat = geraMatrizNXN(ordem);
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("M[%d,%d]:", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("%d", determinantes(ordem, mat));
    return 0;
}