#include <stdio.h>
#include <stdlib.h>
#include "permutacoesPossiveis.h"

int contaPermutas(int* vet, int size) {
	int i, j, permutas = 0;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			if (vet[i] > vet[j]) {
				int aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				permutas++;	
			}
		}
	}
	return permutas;
}

int calculaDeterminantePorLeibniz(int **matriz, int** permutacoes, int ordem) {
	int i, j, soma = 0, produto = 1;
	for (i = 0; i < fatorial(ordem); i++) {
		for (j = 0; j < ordem; j++) {
			produto *= matriz[j][permutacoes[i][j]];
		}
		soma += contaPermutas(permutacoes[i], ordem) % 2 == 0 ? produto : -produto;
		produto = 1;
	}
	return soma;
}

int main() {
	// Declarando variáveis e pedindo entrada 
	int *ptr, contador = 0, i, j, ordem;
	ptr = &contador;
	*ptr = 0;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	
	// Definindo os valores para permutação
	int oneToOrdem[ordem], fat = fatorial(ordem);
	for (i = 0; i < ordem; i++) {
		oneToOrdem[i] = i;
	}
	
	// Alocando memória para matriz e permutações
	int** matriz = (int**) malloc(sizeof(int*) * ordem);
	for (i = 0; i < ordem; i++) {
		matriz[i] = (int*) malloc(sizeof(int) * ordem);
	}
	 
	int** permutacoes = (int**) malloc(sizeof(int*) * fat);
	for (i = 0; i < fat; i++) {
		permutacoes[i] = (int*) malloc(sizeof(int) * ordem);
	}
	permutation(oneToOrdem, permutacoes, ptr, 0, ordem-1);
	
	// Pedindo a matriz de entrada
	for (i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			printf("M[%d:%d]", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int determinante = calculaDeterminantePorLeibniz(matriz, permutacoes, ordem);
	printf("Determinante dessa matriz eh: %d", determinante);
	return 0;
}
