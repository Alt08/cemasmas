/*
    -Un programa que lea una cadena de caracteres de la entrada estandar
    -Muestre en la salida estandar cuantas ocurrencias de cada vocal existe en la cadena
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // Declaran la variable para la cadena de caracteres
    char cad[20];
    int va=0, ve=0, vi=0, vo=0,vu=0;
    cout<<"introduce una frase: ";
    cin.getline(cad, 20, '\n');

    // Recorriendo la cadena y verificando cuantas veces se encuentra una vocal
    for (int i=0; i<20; i++){
        switch (cad[i]){
            case 'a':va++;break;
            case 'e':ve++;break;
            case 'i':vi++;break;
            case 'o':vo++;break;
            case 'u':vu++;break;
        }
    }

    // Imprimiendo las veces que se encuentra una vocal
    cout<<"a: "<<va<<endl;
    cout<<"e: "<<ve<<endl;
    cout<<"i: "<<vi<<endl;
    cout<<"o: "<<vo<<endl;
    cout<<"u: "<<vu<<endl;

    return 0;
}
