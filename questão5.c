#include <stdio.h>
int main () {
    
    int ano;
    
    printf("Insira um ano válido: ");
    scanf("%d", &ano);
    
    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d é certamente um ano bissexto!", ano);
    
 }else{
    printf("%d definitivamente não é um ano bissexto", ano);
}
return 0;
}

