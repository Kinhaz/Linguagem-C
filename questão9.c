#include <stdio.h>

int main() {
    int num, soma = 0, digito;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (num != 0) {
  
        digito = num % 10;

        soma += digito * digito;

        num /= 10;
    }

    printf("A soma dos quadrados dos digitos é: %d\n", soma);

    return 0;
}
