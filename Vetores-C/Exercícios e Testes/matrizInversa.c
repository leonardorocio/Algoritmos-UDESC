#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../Bibliotecas/matriz.h"

int** menorParaInversa(int linha, int coluna, int ordem, int **matriz) {
	int i, j;
	int **mat = geraMatrizNXN(ordem - 1);
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			if (coluna != j && linha != i) {
				if (i > linha && j > coluna) {
					mat[i - 1][j - 1] = matriz[i][j];
				} else if (i > linha && j <= coluna) {
					mat[i - 1][j] = matriz[i][j];
				} else if (i <= linha && j > coluna) {
					mat[i][j - 1] = matriz[i][j];
				} else {
					mat[i][j] = matriz[i][j];
				}
			}
		}
	}
	return mat;
}

int** matrizDeCofatores(int ordem, int **matriz) {
	int **C = geraMatrizNXN(ordem);
	int i, j;
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			int **menorInversa = menorParaInversa(i, j, ordem, matriz);
			int cofator = (int) pow(-1.0, i + j) * determinantes(ordem - 1, menorInversa);
			free(menorInversa[0]);
			free(menorInversa);
			C[i][j] = cofator;
		}
	}
	return C;
}

int main() {
	int ordem, i, j;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	int **mat = geraMatrizNXN(ordem);
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			printf("M[%d,%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	int det = determinantes(ordem, mat);
	int **cofatoresTransposta = transposta(ordem, matrizDeCofatores(ordem, mat));
	free(mat[0]);
	free(mat);
	printf("Matriz Inversa: \n");
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			printf("%4d/%d ", cofatoresTransposta[i][j], det);
		}
		printf("\n");
	}
	free(cofatoresTransposta[0]);
	free(cofatoresTransposta);
	return 0;
}
