#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do {
        printf("Digite a quantidade de termos: ");
        scanf("%d", &n);
    } while (n > 46);
    int v[n], i;
    v[0] = 1;
    v[1] = 1;
    for (i = 2; i < n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
