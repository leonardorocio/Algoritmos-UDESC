#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    int n, i, j;
    printf("Digite x e a quantidade n de termos: ");
    scanf("%f%d", &x, &n);
    double e_x = 0, termo = 1;
    for (i = 0, j = 1; i <= n; j++) {
        if (j <= i){
            termo *= x / j;
        } else {
            e_x += termo;
            i++; j = 1; termo = 1;
        }
    }
    printf("%.15lf", e_x);
    return 0;
}
