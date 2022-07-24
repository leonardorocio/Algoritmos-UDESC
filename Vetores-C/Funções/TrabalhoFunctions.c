#include <stdio.h>
#include <stdlib.h>

#define MAX 200000

void frente(int vet[], int n, int i, int v) {
	while (v > 0 && i <= n) {
		vet[i] += v;
		i++;
		v--;
	}
}
void tras(int vet[], int n, int i, int v) {
	while (v > 0 && i >= 0) {
		vet[i] += v;
		i--;
		v--;
	}
}
void imprime(int vet[], int n, int i) {
	printf("%d\n", vet[i]);
} 

int main() {
	int v[MAX], n, m, i, c, p, k, validoTamanho, validoEntrada = 1;
	for (i = 0; i < MAX; v[i] = 0, i++);
	do {
		scanf("%d %d", &n, &m);
		validoTamanho = n >= 1 && n <= MAX && m >= 1 && m <= MAX ? 1 : 0;
	} while (!validoTamanho);
	for (i = 0; i < m; i++) {
		do {
			scanf("%d %d", &c, &p);
			if (c == 1 || c == 2)
				scanf(" %d", &k);
				validoEntrada = k >= 1 && k <= MAX ? 1 : 0;
			validoEntrada = validoEntrada && p >= 1 && p <= n ? 1 : 0;
		} while (!validoEntrada);
		switch(c) {
			case 1: frente(v, n - 1, p - 1, k); break;
			case 2: tras(v, n - 1, p - 1, k); break;
			case 3: imprime(v, n - 1, p - 1); break;
		}
	}
	return 0;
}
