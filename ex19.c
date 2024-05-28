#include <iostream>
#include <conio.h>

using namespace std;

int fatorial(int n);

int main(){

    int n = 1;
    cout << "Fatorial de " << n << " ";
    cout << fatorial(n);

    getch();
    return 0;
}

int fatorial(int n){
    if (n < 2){
        return 1;
    }
    return fatorial(n -1) * n;
    
}