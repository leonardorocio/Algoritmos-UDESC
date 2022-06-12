#include <stdio.h>

#define printf __mingw_printf
#define scanf __mingw_scanf

int main(int argc, char const *argv[])
{
    long long int n, i;
    double x;
    printf("Digite a quantidade de termos na serie: ");
    scanf("%d", &n);
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    double termo = 1, somatorio = 1, num = -1;
    for (i = 1; i < n; i++) {
       termo *= num * x * x / ((2*i - 1) * (2 * i));
       somatorio += termo;
	}
    printf("Seno de %.2lf eh %lf", x, somatorio);
    return 0;
}
