// 2 - Herenecia publica.cpp
// Significa que una clase derivada tiene acceso a los
// elementos publicos protegidos de su clase. Los elementos
// publicos se heredan como elementos publicos; los elementos
// protegidos permanecen protegidos; 
// los elementos privados no se heredan
#include <iostream>
#include "turismo.h"
using namespace std;

int main(int argc, char** argv){

	turismo* t1 = new turismo("toyota", "plomo", "GH89", 4);

	 cout << "Color: " << t1->getColor() << endl;

	t1->setColor("Negro");
	cout << "Color: " << t1->getColor() << endl;

	cout << "Modelo: " << t1->retornarModelo();



	return 0;
}
