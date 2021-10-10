#include <iostream>
using namespace std;
/*
    Numeros naturales a romanos
*/
int main(){
    int numero,unidades,decenas,centenas,millar;
    cout<<"Introduce un numero: "; cin>>numero;
    unidades = numero%10; numero/=10;
    cout<<"El valor de unidades es: "<<numero<<endl;
    decenas = numero%10; numero/=10;
    cout<<"El valor de decenas es: "<<numero<<endl;
    centenas = numero%10; numero/=10;
    cout<<"El valor de centenas es: "<<numero<<endl;
    millar = numero%10; numero/=10; //
    cout<<"El valor de millar es: "<<numero<<endl;

    //-------------------------MILLAR------------------------------
    switch (millar){
        case 1:cout<<"M"; break;
        case 2:cout<<"porque"; break;
        case 3:cout<<"sfs"; break;
        case 4:cout<<"grt"; break;
        case 5:cout<<"hty"; break;
    }
    //----------------------------CENTENAS-----------------------------
    switch (centenas){
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCC"; break;
        case 9: cout<<"CM"; break;
    }
    //----------------------------DECENAS-----------------------------
    switch (decenas){
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
    }
    //----------------------------UNIDADES-----------------------------
    switch (unidades){
        case 1: cout<<"I";   break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
        case 10: cout<<"X";  break;
    }

    return 0;
}