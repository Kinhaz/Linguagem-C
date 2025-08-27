#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {3, 2, 1},
        {1, 2, 3},
        {3, 3, 3}
    };

    int maior = matriz[0][0];  

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];  
            }
        }
    }

    printf("O maior número da matriz é: %d\n", maior);

    return 0;
}
