#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void gera_valores(int LIN, int COL, int m[LIN][COL]) {
	int i, j;
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			m[i][j] = rand() % 100 + 1;
		}
	}
}

int menorDaMatriz(int LIN, int COL, int m[LIN][COL]) {	
	int i, j, posX = 0, posY = 0;
	int menor = m[0][0];
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (m[i][j] < menor) {
				menor = m[i][j];
				posX = i;
				posY = j;
			}
		}
	}
	return menor;
}

int maiorDaMatriz(int LIN, int COL, int m[LIN][COL]) {	
	int i, j, posX = 0, posY = 0;
	int maior = m[0][0];
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (m[i][j] > maior) {
				maior = m[i][j];
				posX = i;
				posY = j;
			}
		}
	}
	return maior;
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
