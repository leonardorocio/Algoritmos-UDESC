#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, r, j, termo;
    printf("Digite a quantidade de termos, o elemento inicial e a razao da progressao: ");
    scanf("%d%d%d", &n, &i, &r);
    for (j = 1; j <= n; j++) {
        termo = i + (j - 1) * r;
        printf("Termo %d: %d\n", j, termo);
    }
    return 0;
}
