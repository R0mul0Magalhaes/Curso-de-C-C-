#include <iostream>

using namespace std;

struct clientes{
    int clientes_id,
    char nome[30],
    int idade,
    float salario
};

int main (){
    clientes meu_cliente;

    meu_cliente = {1, "Romulo", 17, 500};

    cout << "Entre com o Id do cliente: ";
    cin_getline(meu_cliente[0].cliente_id, 4, '\n');

    cout << "Entre com o nome do cliente: ";
    cin_getline(meu_cliente[0].nome, 30, '\n');

    cout << "Entre com a idade do cliente: ";
    cin >> meu_cliente[0].idade;

    cout << "Id do cliente: " << meu_cliente[0].cliente_id << endl;
    cout << "Nome do Cliente: " << meu_cliente[0].nome << endl;
    cout << "Idade do cliente: " << meu_cliente[0].idade; 


    getch();
    return 0;
}
