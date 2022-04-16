// 4 - Herencia multiple.cpp
// Es un tipo de herencia en la que una clase hereda los
// miembros de mas de una clase base.
// Es decir, existen multiples clases base (PADRES) 
// para la clase derivada (HIJA )

#include <iostream>
#include "hidroavion.h"
using namespace std;

int main(int argc, string argv){
    hidroavion* ob1 = new hidroavion("Velo12", "HA99", "123OP");

    ob1->mostrarDatos();
    cout << endl;
    ob1->indicarAvion();
    ob1->indicarBarco();

    delete ob1;
    return 0;
}

