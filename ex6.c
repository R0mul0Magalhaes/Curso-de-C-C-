#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Entre com o valor de A";
    cin >> a;

    cout << "Entre com o valor de B";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "O valor de A: " << a << endl;
    cout << "o valor de B: " << b << endl;

    getch();

    return 0;
}