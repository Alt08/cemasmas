/*
    -Pedir al usuario 2 cadenas de caracteres de numero
    -Uno entero
    -Otro real
    -COnvertirlos a sus respectivos valores
    -Sumarlos
    -Mostrar en pantalla
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    // Declrando las cadenas
    char num1[10], num2[10];
    // Declrando las variables enteros y flotantes
   int entero;
    float real, suma;

    // Pidiendo fatos al usurio
    cout<<"introduce un numero entero: ";
    cin.getline(num1, 10, '\n');
    cout<<"introduce el segundo numero: ";
    cin.getline(num2, 10, '\n');

    // Convirtiendo los valores a enteres y reales
    entero = atoi(num1);
    real = atof(num2);

    // Sumando los numero convertidos;
    suma = entero + real;
    // Imprimiendo el resultado de la suma
    cout<<"La suma es: "<<suma<<endl;

    return  0;
}
