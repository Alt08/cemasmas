#include <iostream>
using namespace std;
/*
    comprobar si una vocal el mayuscula, miniscula o si no lo es
*/
int main(){
    char bocal;

    cout<<"Introduce una vocal: "; cin>>bocal;
	switch (bocal){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayuscula"; break;

        default: cout<<"No es una vocal "; break;
    }
    return 0;
}
