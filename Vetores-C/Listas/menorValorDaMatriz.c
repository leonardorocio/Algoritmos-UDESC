#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 7
#define COL 4

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int M[LIN][COL], i, j, posX = 0, posY = 0;
	gera_valores(LIN, COL, M);
	int menor = M[0][0];
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (M[i][j] < menor) {
				menor = M[i][j];
				posX = i;
				posY = j;
			}
		}
	}
	mostra_matriz(LIN, COL, M, 'M');
	printf("O menor valor da matriz é: %d\n", menor);
	printf("Localizado na posição (%d, %d)", posX, posY);
	
	return 0;
}
