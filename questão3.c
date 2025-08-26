#include <stdio.h>

int main() {
    int a, fat = 1, i;
    
    printf("Fatorial de: \n");
    scanf("%d", &a);
    
    for(i = 1; i <= a; i++){
        fat = fat * i;
    }
    
    printf("Fatorial de %d eh %d", a, fat);
}
