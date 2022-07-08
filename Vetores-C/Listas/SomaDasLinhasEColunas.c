#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 5
#define COL 5

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int M[LIN][COL], SL[LIN], SC[COL], i, j;
	gera_valores(LIN, COL, M);
	for (i = 0; i < LIN; SC[i] = 0, SL[i] = 0, i++);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			SL[i] += M[i][j];
//			SC[i] += M[j][i];
			SC[j] += M[i][j];
		}
	}
	mostra_matriz(LIN, COL, M, 'M');
	printf("Somas das linhas: \n");
	for (i = 0; i < LIN; i++) {
		printf("%d ", SL[i]);
	}
	printf("\nSoma das Colunas: \n");
	for (i = 0; i < LIN; i++) {
		printf("%d ", SC[i]);
	}
	return 0;
}
