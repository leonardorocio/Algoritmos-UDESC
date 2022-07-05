#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n], invertido[n], i;
    printf("Digite %d valores para o vetor: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Vetor invertido: \n");
    for (i = 0; i < n; i++) {
        invertido[i] = v[(n - 1) - i];
        printf("%d ", invertido[i]);
    }
    return 0;
}
