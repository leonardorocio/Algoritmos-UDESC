#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define MAX 15

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int v[MAX], i, j;
    for (i = 0; i < MAX; i++) {
        v[i] = rand() % 1000 + 1;
        
    }
    int aux;
    for (i = 0; i < MAX; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (i = 0; i < MAX; i++) {
        printf("%d: %d\n", i, v[i]);
    }
    int x;
    scanf("%d", &x);
    int inicio = 0, fim = MAX - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (x == v[meio]) {
            printf("Índice %d: %d", meio, x);
            break;
        }
        else {
            if (v[meio] > x) {
                fim = meio - 1;
            } else {
                inicio = meio + 1;
            }
        } 
    }
    return 0;
}