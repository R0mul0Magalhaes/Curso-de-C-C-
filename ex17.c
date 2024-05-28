#include <iostream>
#include <conio.h>

using namespace std;

int soma( int a, int b);
void imprime(string mensagem);
void tabuada(int numero){
    
int main(){

    cout << "Qual tabuada deseja saber?";
    cln >> numero;

    tabuada(7);

    cout << "numero" << numero;

    getch();
    return 0;
}

void tabuada(int numero){
    cout << "Tabuada do " << numero << endl;
    for (int i = 1; i <= 10; i++){
        cout << numero << " X " << i << " = " << (numero*1) << endl;
    }
}
}
