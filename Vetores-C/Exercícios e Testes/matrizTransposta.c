#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int lin, col, i, j;
    srand(time(0));
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Digite a quantidade de linhas e colunas da matriz: ");
    scanf("%d%d", &lin, &col);
    int mat[lin][col];
    printf("Matriz inicial (%dX%d)\n", lin, col);
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            mat[i][j] = rand() % 1000 + 1;
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    int transposta[col][lin];
    printf("Matriz Transposta (%dX%d)\n", col, lin);
    for (i = 0; i < col; i++) {
        for (j = 0; j < lin; j++) {
            transposta[i][j] = mat[j][i];
            printf("%4d", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}