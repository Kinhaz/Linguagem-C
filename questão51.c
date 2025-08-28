#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("\nDepois da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
