#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, i, x[MAX], y[MAX], somaX = 0, somaY = 0, somaXVY = 0, somaXQuad = 0, valido = 1;	
	do {
		scanf("%d", &n);
		valido = n < MAX ? 1 : 0;
	} while (!valido);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
		somaX += x[i];
		somaY += y[i];
		somaXVY += x[i] * y[i];
		somaXQuad += x[i] * x[i];
	}
	float denominador = (n * somaXQuad) - (somaX * somaX);
	float aOne = ((n * somaXVY) - (somaX * somaY)) / denominador;
	float aZero = ((somaY * somaXQuad) - (somaX * somaXVY)) / denominador;
	printf("A equação dos mínimos quadrados é: y = %.6fx + %.6f", aOne, aZero);
	return 0;
}
