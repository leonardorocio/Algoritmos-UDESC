#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 10
#define COL 10

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int A[LIN][COL], i, j, posXMaior = 0, posY = 0;
	gera_valores(LIN, COL, A);
	int maior = A[0][0], menor = A[0][0];
	for(i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (A[i][j] > maior) {
				maior = A[i][j];
				posXMaior = i;
			}
		}
	}
	int menor = A[posXMaior][0];
	for (j = 0; j < COL; j++) {
		if (A[posXMaior][j] < menor) {
			menor = A[posX][j];
			posY = j;
		}
	}
	mostra_matriz(LIN, COL, A, 'A');
	printf("O elemento MiniMax é %d na posição (%d, %d)\n", menor, posXMaior, posY);
}
