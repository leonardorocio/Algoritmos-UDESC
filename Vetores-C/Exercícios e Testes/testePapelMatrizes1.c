#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5

int main() {
	int m[LIN][COL], i, j, posXMaior = 0, posXMenor = 0, posYMaior = 0, posYMenor = 0;
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("M[%d,%d]", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	int maior = m[0][0], menor = m[0][0];
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (m[i][j] > maior) {
				posXMaior = i;
				posYMaior = j;
				maior = m[i][j];
			} else if (m[i][j] < menor) {
				posXMenor = i;
				posYMenor = j;
				menor = m[i][j];
			}
		}
	}
	printf("Maior: %d na posicao (%d, %d)\n", maior, posXMaior, posYMaior);
	printf("Menor: %d na posicao (%d, %d)", menor, posXMenor, posYMenor);
}
