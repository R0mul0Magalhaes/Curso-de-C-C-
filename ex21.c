#include <iostream>
#include <string>
#include <conio.h>

usign namespace std;

class Pessoa{
    public:
        int id;
        string nome;
        int idade;

    void mostraNome(){
        cout << nome;
    }
}

int main(){
    
    Pessoa amigo;

    amigo.id = 1;
    amigo.nome = "Pedro";
    amigo.idade = 20;

    amigo.mostraNome();

    cout << "ID" << amigo.id << endl;
    cout << "NOME" << amigo.nome << endl;
    cout << "IDADE" << amigo.nome << endl;

    getch();
    return 0;
}