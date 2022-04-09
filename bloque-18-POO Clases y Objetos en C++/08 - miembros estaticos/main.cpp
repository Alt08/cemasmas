// Miembros estatic o miebros de clases
// Son mienbros (atributos y metodos) que pertenecen a una clases
#include <iostream>
#include "estaticos.h"
using namespace std;

int main(int argc, char** argv) {
	estatico* ob1 = new estatico();
	estatico* ob2 = new estatico();
	estatico* ob3 = new estatico();
	
	cout << ob1->getContador(); // Al ser estatico todo objeto creado se incrementara al invocar el metodo getContador
	
	//  Para llamar un metodo estatico no es necesario crear un objeto
	cout << "\nSuma es: " << estatico::sumar(2,3);
	
	
	return 0;
}