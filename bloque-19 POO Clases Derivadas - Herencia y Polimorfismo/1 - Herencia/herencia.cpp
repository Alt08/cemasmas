// herencia.cpp : Este archivo contiene la función "main". 
// La ejecución del programa comienza y termina ahí.

// La herencia es la reacion que existe entre 2 clases, en la que una clase
// denominada clase hija o derivada se crea a partir de otra ya existente ,
// denominada clase padre o base 

// 

#include <iostream>
#include <math.h>
#include "triangulo.h"

using namespace std;

int main(){
    triangulo* f1 = new triangulo(3,5,6,7);

    cout << "Numero de lados: " << f1->getnLados() << endl;
    cout << "Area: " << f1->areaTriangulo() << endl;

    return 0;
}