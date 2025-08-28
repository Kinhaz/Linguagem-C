#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    // Solicita o operador
    printf("Digite a operação desejada (+, -, / ou *): ");
    scanf(" %c", &operador);  // O espaço antes do %c ignora espaços e quebras de linha anteriores

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Realiza a operação com base no operador digitado
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: operador inválido!\n");
    }

    return 0;
}
