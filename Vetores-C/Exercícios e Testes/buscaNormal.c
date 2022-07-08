#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15

int main(int argc, char const *argv[])
{
    srand(time(0));
    int v[MAX], i, j;
    for (i = 0; i < MAX; i++) {
        v[i] = rand() % 1000 + 1;
        printf("%d: %d\n", i, v[i]);
    }
    int x, achou = 0; // Iniciamos achou = 0 pois ainda não achamos nosso elemento e 0 é falso em booleano
    scanf("%d", &x);
    for (i = 0; i < MAX; i++) {
        if (v[i] == x) {
        	achou = 1; // Definimos achou = 1 pois, agora achamos e então passa a ser verdadeiro em booleano
        	printf("Indice %d: %d", i, x);
        	return 0;
        }
    }
    if (!achou) { // Lembrando que o If só executa se a expressão resultante for verdadeira.
    	// O operador ! é de negação, ou seja, um não lógico que inverte o valor da expressão
    	// Dado que a expressão só chega nesse ponto se ele não achou o valor no vetor, temos que achou = 0;
    	// Se achou = 0 e o IF só executa se a expressão for verdadeira
    	// A condição não será executada, pois 0 é falso em booleano;
    	// Ao utilizarmos o !, invertemos o valor de achou, que passa a ser 1;
    	// Assim o IF executa e o programa diz que o elemento não foi encontrado;
    	// A expressão representa uma especie de "não achou", se ele realmente não encontrou ele "não achou" então é 1
    	// Caso ele tenha encontrado, "não achou" é falso e portanto igual a 0, logo o if não executa.
    	printf("Elemento não encontrado");
	}
    return 0;
}
