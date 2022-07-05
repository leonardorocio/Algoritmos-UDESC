#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "../Bibliotecas/matriz.h"

#define LIN 5
#define COL 6

int main(int argc, char const *argv[])
{
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    int M[LIN][COL], i, j;
    float media = 0, soma_pares = 0, total_pares = 0;
    gera_valores(LIN, COL, M);
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (M[i][j] % 2 == 0) {
                soma_pares += M[i][j];
                total_pares++;
            }
        }
    }
    media = soma_pares / total_pares;
    mostra_matriz(LIN, COL, M, 'M');
    printf("A media dos valores pares da matriz é %.2f", media);
    return 0;
}
