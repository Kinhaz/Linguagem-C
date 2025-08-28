#include <stdio.h>

int main() {
    int num, i, soma;

    printf("Números perfeitos entre 1 e 100:\n");

    for (num = 1; num <= 100; num++) {
        soma = 0;

        // Soma todos os divisores de num (inclusive ele mesmo)
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }

        // Verifica se a soma é igual ao dobro do número
        if (soma == 2 * num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
