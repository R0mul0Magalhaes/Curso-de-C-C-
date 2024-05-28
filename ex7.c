#include <iostream>

using namespace std;

int main(){
    float a, b;

    int adicao, subtracao, multiplicacao;
    float divisao, resto;

    a = 10;
    b = 2;

    //Somar
    adicao = a + b;

    //Subtrair
    subtracao = a - b;

    //Multiplicação
    multiplicacao = a * b;

    //Divisão
    divisao = a / b;

    //Resto
    resto = a % b;

    cout << "Adição " << adicao << endl;
    cout << "Subtração" << subtracao << endl;
    cout << "Multiplicação" << multiplicacao << endl;
    cout << "Divisão" << divisão << endl;
    cout << "Resto" << resto << endl;
    
    return 0;
}