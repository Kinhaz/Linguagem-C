#include <stdio.h>

int main() {
    int num = 1;
    
    while(num != 0){
    printf("Insira um numero: \n");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d este número é par!\n", num);
    }else{
        printf("%d este número é ímpar!\n",num);
    }
    }
}
