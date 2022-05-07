#include <stdio.h>

int main() {
    double fahreinheit, celsius;
    printf("Digite a temperatura em ºF: ");
    scanf("%f", &fahreinheit);
    celsius = (5 / 9) * (fahreinheit - 32);
    printf("A temperatura em ºC é de %.2f", celsius);    
}