#include <stdio.h>
#include <conio.h>

int main(){
    char nome[30];
    
    printf("Qual o nome?");
    gets(nome);
    printf("O nome digitado foi %s", nome);

    return 0;
}