#include <iostream>
#include <conio.h>

using namespace std;

void mostra_numero(int numero);
int main(){

    int numero = 9;

    mostra_numero(numero);

    cout << "Numero da funcao main(): " <<  numero;

    getch();
    return 0;
}

void mostra_numero(numero){
    cout << "numero: +1" << numero << endl;
}