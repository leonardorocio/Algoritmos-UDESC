#include <stdio.h>

int main(int argc, char const *argv[])
{
    float areaComodo, potencia, largura, comprimento, totalLampadas;
    printf("Digite a potencia da lampada, a largura e comprimento do comodo: ");
    scanf("%f", &potencia);
    scanf("%f", &largura);
    scanf("%f", &comprimento);
    areaComodo = (largura * comprimento);
    totalLampadas = (areaComodo * 18) / (potencia);

    printf("Serão necessárias %.2f lâmpadas de %.2f W para iluminar o cômodo", totalLampadas, potencia);
    return 0;
}
