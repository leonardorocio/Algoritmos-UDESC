#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 4
#define COL 6

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int A[LIN][COL], B[LIN][COL], S[LIN][COL], D[LIN][COL], i, j;
	gera_valores(LIN, COL, A);
	gera_valores(LIN, COL, B);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			S[i][j] = A[i][j] + B[i][j];
			D[i][j] = A[i][j] - B[i][j];
		}
	}
	mostra_matriz(LIN, COL, A, 'A');
	mostra_matriz(LIN, COL, B, 'B');
	mostra_matriz(LIN, COL, S, 'S');
	mostra_matriz(LIN, COL, D, 'D');
	return 0;
}
