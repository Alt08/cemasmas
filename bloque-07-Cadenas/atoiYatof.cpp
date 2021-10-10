//Tranformar una cadena a numeros - Funcion atoi() y atof() funciona con la libreria stdlib.h
// Atoi = numero enteros
// Atof = numeros flotantes

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char cadena[] = "123.45";
    float numeros;

    numeros = atof(cadena);
    cout<<numeros<<endl;

    return 0;
}