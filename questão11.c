int main() {
    #include <stdio.h>
    
    int limite, a = 0, b = 1, prox;

    printf("Informe um número limite: ");
    scanf("%d", &limite);

    printf("Sequência de Fibonacci até %d:\n", limite);

    while (a <= limite) {
        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
    }

    printf("\n");
    
    return 0;
}
