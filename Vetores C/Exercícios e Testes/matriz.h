#include <stdio.h>
#include <stdlib.h>


void gera_valores(int m[LIN][COL]) {
	int i, j;
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			m[i][j] = rand() % 1000 + 1;
		}
	}
}

void mostra_matriz(int m[LIN][COL], char id) {
	int i, j;
	printf("Matriz %c (%dX%d):\n", id, LIN, COL);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%5d", m[i][j]);
		}
		printf("\n");
	}
}
