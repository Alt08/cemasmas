#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char bocal;

    cout<<"Introduce una vocal: "; cin>>bocal;
    switch (bocal){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"; break;
        default: cout<<"No es una vocal minuscula"; break;
    }
    getch();
    return 0;
}