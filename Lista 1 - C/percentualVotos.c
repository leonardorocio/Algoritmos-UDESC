#include <stdio.h>

int main(int argc, char const *argv[])
{
    float validos, nulos, brancos, total;
    float percentualV, percentualN, percentualB;
    printf("Digite os votos validos, nulos e brancos: ");
    scanf("%i", &validos);
    scanf("%i", &nulos);
    scanf("%i", &brancos);

    total = validos + nulos + brancos;
    percentualV = (validos / total);
    percentualN = (nulos / total);
    percentualB = (brancos / total);

    printf("Percentual de votos %.2f validos, %.2f brancos, %.2f nulos", percentualV, percentualB, percentualN);

    return 0;
}
