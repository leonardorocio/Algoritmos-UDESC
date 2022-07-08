#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "../Exercícios e Testes/determinante.h"

void gera_valores(int LIN, int COL, int m[LIN][COL]) {
	int i, j;
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			m[i][j] = rand() % 100 + 1;
		}
	}
}

int** transposta(int ordem, int **matriz) {
	int i, j;
	int **t = geraMatrizNXN(ordem);
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			t[i][j] = matriz[j][i];
		}
	}
	return t;
}

void mostra_matriz(int LIN, int COL, int m[LIN][COL], char id) {
	int i, j;
	printf("Matriz %c (%dX%d):\n", id, LIN, COL);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%5d", m[i][j]);
		}
		printf("\n");
	}
}
