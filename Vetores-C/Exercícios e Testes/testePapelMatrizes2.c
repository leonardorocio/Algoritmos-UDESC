#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

int main() {
	int t[COL][LIN], m[LIN][COL], i, j;
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("M[%d, %d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	for (i = 0; i < COL; i++) { // Esse laço externo é das linhas, como COL é a linha de t, i se refere as linhas de t e colunas de m;
		for (j = 0; j < LIN; j++) { // Aqui é das colunas, como LIN é a coluna de t, j se refere as colunas de t e as linhas de m;
			t[i][j] = m[j][i];
		}
	}
	printf("Matriz Normal (%d, %d)\n", LIN, COL);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Transposta (%d, %d)\n", COL, LIN);
	for (i = 0; i < COL; i++) {
		for (j = 0; j < LIN; j++) {
			printf("%4d", t[i][j]);
		}
		printf("\n");
	}
}
