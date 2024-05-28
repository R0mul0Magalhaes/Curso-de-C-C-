#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPODADO>
TIPODADO funcao(TIPODADO a );

int main(){
    
    cout << funcao( 10 );
    cout << funcao( 3.14 );

    getch();
    return 0;
}

template <class TIPODADO>
TIPODADO funcao( TIPODADO a ){
    // cout << typeid( a ).name() << endl;
    if (typeid(a).name() == typeid( int ).name()){
        cout << "Inteiro";
    }

    if (typeid(a).name() == typeid( double ).name()){
        cout << "Double";
    }
    
    return ++a;
}