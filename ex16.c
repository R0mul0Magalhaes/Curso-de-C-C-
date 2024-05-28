#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numero = 5;
    int *ponteiro;

    ponteiro = &numero ;

    cout << "Valor da variavel numero " << numero << endl;
    cout << " Posição de memoria da variavel numero " << &numero << endl;

    cout << "Ponteiro posição de memoria " << ponteiro;
    cout << "Ponteiro valor na posição de memoria " << ponteiro;

    getch();
    return 0;
}