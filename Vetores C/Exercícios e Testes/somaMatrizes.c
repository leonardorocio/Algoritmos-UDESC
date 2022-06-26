#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int lin, col, i, j;
    srand(time(0));
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Digite a quantidade de linhas e colunas das matrizes a somar: ");
    scanf("%d%d", &lin, &col);
    int mat[lin][col], sec[lin][col];
    // printf("Matriz inicial (%dX%d)\n", lin, col);
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i][j] = rand() % 1000 + 1;
            sec[i][j] = rand() % 1000 + 2;
            // printf("%4d", mat[i][j]);
        }
    }
    int soma[lin][col];
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            soma[i][j] = mat[i][j] + sec[i][j];
        }
    }
    int t;
    for (t = 0; t < 3; t++) {
        printf("Matriz %d\n", t + 1);
        if (t == 2)
            printf("MATRIZ SOMA\n");
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                if (t == 0)
                    printf("%4d", mat[i][j]);
                else if (t == 1)
                    printf("%4d", sec[i][j]);
                else
                    printf("%5d", soma[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}