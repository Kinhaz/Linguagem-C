#include <stdio.h>

int main() {
    char nome[50], endereco[100];  
    int telefone, idade;

    printf("Informe o seu nome: ");
    scanf("%49s", nome); 

    printf("Informe o seu endereço: ");
    scanf("%99s", endereco);  

    printf("Informe o seu telefone: ");
    scanf("%d", &telefone);

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome é %s, seu endereço é %s, seu telefone é %d, sua idade é %d\n", nome, endereco, telefone, idade);

    return 0;
}
