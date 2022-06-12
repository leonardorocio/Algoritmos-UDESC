#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, i;
    float somatorio = 0;
    printf("Digite a quantidade k de termos: ");
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        somatorio += 1.0 / (i + 1);
    }
    printf("Somatorio da serie harmonica de %d termos eh %.2f", k, somatorio);
    return 0;
}
