// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int matriz[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     matriz[ 2 ] = 333;

//     for(int i = 0; i<10; i++)
//       printf(matriz[ i ]);

//     return 0;
// }

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char matriz[22] = "CURSO DE C";

    matriz[ 10 ] = '+';
    matriz[ 11 ] = '+';

    matriz[ 20 ] = '!';

    cout << "Tamanho do Array" << sizeof(matriz);

    for(int i = 0; i<sizeof(matriz)-i; i++)
      cout << matriz[ i ] << endl;

    getch();
    return 0;
}