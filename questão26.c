#include <stdio.h>
#include <math.h>  

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float produto = num1 * (num2 * num2);
    float quadrado_num1 = num1 * num1;
    float raiz_quadrados = sqrt((num1 * num1) + (num2 * num2));
    float seno_diferenca = sin(num1 - num2);
    float modulo_num1 = fabs(num1);  

    printf("\nResultados:\n");
    printf("Soma dos numeros: %.2f\n", soma);
    printf("Produto do primeiro numero pelo quadrado do segundo: %.2f\n", produto);
    printf("Quadrado do primeiro numero: %.2f\n", quadrado_num1);
    printf("Raiz quadrada da soma dos quadrados: %.2f\n", raiz_quadrados);
    printf("Seno da diferença entre o primeiro e o segundo numero: %.2f\n", seno_diferenca);
    printf("Modulo do primeiro numero: %.2f\n", modulo_num1);

    return 0;
}
