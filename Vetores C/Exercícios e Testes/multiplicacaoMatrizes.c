#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int linA, colA, linB, colB, i, j;
    srand(time(0));
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Digite a quantidade de linhas e colunas das matriz A: ");
    scanf("%d%d", &linA, &colA);
    printf("Digite a quantidade de linhas e colunas das matriz B: ");
    scanf("%d%d", &linB, &colB);
    int A[linA][colA], B[linB][colB];
    if (colA == linB) {
        for (i = 0; i < linA; i++) {
            for (j = 0; j < colA; j++) {
                printf("A[%d,%d]: ", i, j);
                scanf("%d", &A[i][j]);
            }
        }
        for (i = 0; i < linB; i++) {
            for (j = 0; j < colB; j++) {
                printf("B[%d,%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        int prod[linA][colB], t, somaProds;
        int n_mult = linB;
        for (i = 0; i < linA; i++) {
            for (j = 0; j < colB; j++) {
                for (t = 0, somaProds = 0; t < n_mult; t++) {
                    somaProds += A[i][t] * B[t][j];
                }
                prod[i][j] = somaProds;
            }
        }
        printf("Matriz  multiplicada (%dX%d)\n", linA, colB);
        for (i = 0; i < linA; i++) {
            for (j = 0; j < colB; j++) {
                printf("%5d", prod[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
