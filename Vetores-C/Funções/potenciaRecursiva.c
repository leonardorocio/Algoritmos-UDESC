#include <stdio.h>
#include <stdlib.h>

float potencia(float b, float x) {
	if (x == 0) {
		return 1;
	} else if (x < 0) {
		return potencia(1 / b, -x);
	} else {
		return b * potencia(b, x - 1);
	}
}

int main() {
	float base, exp;
	scanf("%f%f", &base, &exp);
	printf("A potencia de %.2f elevado a %.2f eh: %.2f", base, exp, potencia(base, exp));
}
