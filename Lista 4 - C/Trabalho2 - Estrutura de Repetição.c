#include <stdio.h>

int main(int argc, char const *argv[])
{
    int executando;
    printf("Digite 1 para calcular MMC e MDC ou 0 para sair: ");
    scanf("%d", &executando);
    while (executando) {
        int a, b, mmc = 1, mdc = 1, divisor = 2, valido;
        do {
            printf("Digite os valores de a e b: ");
            scanf("%d%d", &a, &b);
            valido = a > 0 && b > 0 ? 1 : 0;    
        } while (!valido);
        while (a != 1 || b != 1) {
            int contaDivisoes = 0;
            if (a % divisor == 0) {
                a /= divisor;
                contaDivisoes++;
            }
            if (b % divisor == 0) {
                b /= divisor;
                contaDivisoes++;
            }
            switch (contaDivisoes) {
                case 0: divisor++; break;   
                case 1: mmc *= divisor; break;
                case 2: mmc *= divisor; mdc *= divisor;
            }
            // if (a % divisor == 0 || b % divisor == 0) {
            //     int flag = 0;
                // if (a % divisor == 0) {
                //     a = a / divisor;
                //     flag++;
                // }
                // if (b % divisor == 0) {
                //     b = b / divisor;
                //     flag++;
                // }
            //     if (flag == 2) {
            //         mdc *= divisor;
            //     }
            //     mmc *= divisor;
            // } else {
            //     divisor++;
            // }
        }
        printf("Os valores do MMC e do MDC sao respectivamente: %d e %d\n", mmc, mdc);
        printf("Gostaria de continuar fazendo calculos? (1 para continuar e 0 para sair): ");
        scanf("%d", &executando);
    }
    printf("Tchau ate a proxima!");
    return 0;
}
