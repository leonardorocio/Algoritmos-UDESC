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
    int x, achou = 0; // Iniciamos achou = 0 pois ainda n�o achamos nosso elemento e 0 � falso em booleano
    scanf("%d", &x);
    for (i = 0; i < MAX; i++) {
        if (v[i] == x) {
        	achou = 1; // Definimos achou = 1 pois, agora achamos e ent�o passa a ser verdadeiro em booleano
        	printf("Indice %d: %d", i, x);
        	return 0;
        }
    }
    if (!achou) { // Lembrando que o If s� executa se a express�o resultante for verdadeira.
    	// O operador ! � de nega��o, ou seja, um n�o l�gico que inverte o valor da express�o
    	// Dado que a express�o s� chega nesse ponto se ele n�o achou o valor no vetor, temos que achou = 0;
    	// Se achou = 0 e o IF s� executa se a express�o for verdadeira
    	// A condi��o n�o ser� executada, pois 0 � falso em booleano;
    	// Ao utilizarmos o !, invertemos o valor de achou, que passa a ser 1;
    	// Assim o IF executa e o programa diz que o elemento n�o foi encontrado;
    	// A express�o representa uma especie de "n�o achou", se ele realmente n�o encontrou ele "n�o achou" ent�o � 1
    	// Caso ele tenha encontrado, "n�o achou" � falso e portanto igual a 0, logo o if n�o executa.
    	printf("Elemento n�o encontrado");
	}
    return 0;
}
