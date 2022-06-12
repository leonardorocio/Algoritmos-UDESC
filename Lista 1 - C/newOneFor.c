#include <stdio.h>

int main() {
	float x;
    int n, i, j;
    printf("Digite x e a quantidade n de termos: ");
    scanf("%f%d", &x, &n);
    double e_x = 1, termo = 1;
    for (i = 1, j = 1; i <= n; i++, termo *= i * x, e_x += 1.0 / termo) {
    	termo *= i * x;
    	e_x += 1.0 / termo;
	}
	printf("%.15lf", e_x);
	return 0;
}
