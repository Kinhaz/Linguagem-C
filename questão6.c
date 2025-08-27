#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0) {
        while (num % 2 == 0) {
            num /= 2;
        }
        if (num == 1) {
            printf("É potência de 2\n");
        } else {
            printf("Não é potência de 2\n");
        }
    } else {
        printf("Número inválido (deve ser > 0)\n");
    }

    return 0;
}
