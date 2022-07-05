#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 5
#define COL 3

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int M[LIN][COL], i, j, total = LIN * COL, totalPares = 0, totalImpares = 0;
	float percentualPares, percentualImpares;
	gera_valores(LIN, COL, M);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (M[i][j] % 2 == 0) {
				totalPares++;
			} else  {
				totalImpares++;
			}
		}
	}
	mostra_matriz(LIN, COL, M, 'M');
	percentualPares = ((float)totalPares / total) * 100;
	percentualImpares = ((float)totalImpares / total) * 100;
	printf("Total de Pares %d com percentual de %.2f\n", totalPares, percentualPares);
	printf("Total de Impares %d com percentual de %.2f", totalImpares, percentualImpares);
	return 0;
}
