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
	int M[LIN][COL], i, j, somaDP = 0, somaDS = 0, somaL4 = 0, somaC2 = 0, somaTotal = 0;
	gera_valores(LIN, COL, M);
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (i == 3) {
				somaL4 += M[i][j];
			}
			if (j == 2) {
				somaC2 += M[i][j];
			}
			if (i == j) {
				somaDP += M[i][j];
			}
			if (j == LIN - i - 1) {
				somaDS += M[i][j];
			}
			somaTotal += M[i][j];
		}
	}
	mostra_matriz(LIN, COL, M, 'M');
	printf("Soma DP: %d\n", somaDP);
	printf("Soma DS: %d\n", somaDS);
	printf("Soma L4: %d\n", somaL4);
	printf("Soma C2: %d\n", somaC2);
	printf("Soma Total: %d", somaTotal);
	return 0;
}
