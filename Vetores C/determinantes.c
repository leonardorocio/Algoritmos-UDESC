#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int fatorial(n) {
    int i, fat = 1;
    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int permutacoes(int *vetor, int tamanho) {
    int i, permutas = 0;
    int aux, j;
    for (i = 0; i < tamanho; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                permutas++;
            }
        }
    }
    return permutas;
}

int ehUsada(int *vetor, int coluna) {
    int i;
    for (i = 0; i < sizeof(vetor) / 4; i++) {
        if (vetor[i] == coluna) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int ordem, i, j, testando[] = {0, 1};
    srand(time(0));
    setlocale(LC_ALL, "portuguese-brazilian");
    printf("Digite a ordem da matriz para o calculo do determinante: ");
    scanf("%d", &ordem);
    int A[ordem][ordem];
    printf("%d\n", fatorial(ordem) / ordem);
    // printf("Matriz inicial ordem %d\n", ordem);
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("A[%d,%d]:", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int k, t, coluna, linha, colunaUsadas[ordem], det = 0, multi;
    for (k = 0; k < ordem; k++) {
        for (i = 0; i < ordem; i++) 
            colunaUsadas[i] = 0;
        for (t = 0; t < (fatorial(ordem) / ordem); t++) {
            // printf("Elemento [0, %d]: %d\n", k, A[0][k]);
            multi = A[0][k];
            linha = 0;
            coluna = k;
            colunaUsadas[0] = k;
            for (i = 0; i < ordem; i++) {
                for (j = 0; j < ordem; j++) {
                    if (linha != i && coluna != j && !(ehUsada(colunaUsadas, j))) {
                        colunaUsadas[i] = j;
                        multi *= A[i][j];
                        linha = i;
                        coluna = j;
                        // printf("Elemento que multiplicou: %d\n", A[i][j]);
                    }
                }
            }
            if (multi != 0) {
                int permutas = permutacoes(colunaUsadas, ordem);
                if (permutas % 2 == 0) {
                    det += multi;
                } else {
                    det += -multi;
                }
            }
        }
    }
    printf("%d", det);
}