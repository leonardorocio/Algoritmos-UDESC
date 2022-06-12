#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Série de Gregory-Leibniz
    // int k, i, cont;
    // double pi = 0, num = 4.0;
    // printf("Digite a quantidade de termos: ");
    // scanf("%d", &k);
    // for(i = 1, cont = 0; cont <= k; i += 2, cont++) {
    //     pi += num / i;
    //     num = -num;
    // }
    // printf("O valor de pi com %d termos eh %.15lf", k, pi);

    // Série de Nilakantha
    long long int n, i, j, k, cont;
    double pi = 3, num = 4.0;
    printf("Digite a quantidade de termos: ");
    scanf("%lld", &n);
    for (i = 2, j = 3, k = 4, cont = 0; cont < n; cont++, i += 2, j += 2, k += 2) {
        pi += num / (i * j * k);
        num = -num;
    }
    printf("O valor de pi com %lld termos eh %.15lf", n, pi);
    return 0;
}
