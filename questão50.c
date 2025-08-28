#include <stdio.h>

int main() {
    float largura, comprimento, area;

    printf("Informe a largura do terreno: ");
    scanf("%f", &largura);

    printf("Informe o comprimento do terreno: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("A área do terreno é: %.2f metros quadrados.\n", area);

    return 0;
}
