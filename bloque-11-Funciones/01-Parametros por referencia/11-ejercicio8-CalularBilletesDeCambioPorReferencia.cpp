/*
    -Escriba una funcion nombrada cambio() que tenga un parametro en numero entero
    -6 parametros de referencia en numero entero nombreados CIEN, CINCUENTA, VEINTE, DIEZ, CINCO Y UNO
    -La funcion tiene que considerar el valor entero transmitido como una cantidad en dolares
    -Convertir en el numero menor de billetes equivalentes
*/

#include <iostream>
using namespace std;


void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
    int valor, cien, cincuenta, veinte, diez, cinco, uno;


    cout<<"Cantidad de billetes a entregr con cambio: ";
    cin>>valor;
    
    cambio(valor, cien,cincuenta,veinte, diez, cinco, uno);

    cout<<"cien: "<<cien<<endl;
    cout<<"cincuenta: "<<cincuenta<<endl;
    cout<<"veinte: "<<veinte<<endl;
    cout<<"diez: "<<diez<<endl;
    cout<<"cinco: "<<cinco<<endl;
    cout<<"uno: "<<uno<<endl;

    return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor %= 100;
     
    cincuenta = valor / 50;
    valor %= 50;

    veinte = valor / 20;
    valor %= 20;

    diez = valor / 10;
    valor %= 10;

    cinco = valor / 5;
    uno = valor %5;
}