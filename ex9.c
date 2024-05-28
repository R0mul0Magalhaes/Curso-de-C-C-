#include <stdio.h>
#include <conio.h>

int main(){
    int numero = 3;

    switch (numero){
        case 1: 
          printf("Um");
        break;
        case 2: 
          printf("Dois");
        break;
        case 3: 
          printf("Três");
        break;
        case 4: 
          printf("Quatro");
        break;
        case 5: 
          printf("Cinco");
        break;

        default:
          printf("Nenhum ");
            break;
    return 0;
}