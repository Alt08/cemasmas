// 4 - Herencia protegida.cpp
// Los miembros publicos y protwgidos de la clase ase se
// convierten en miembros protegidos de la clase derivada
// y los miembros privados de la clase base se vuelven inaccesibles

// protected -> public      -> protected
//           -> protected   -> protected
//           -> private     -> inaccesible
#include <iostream>
#include "turismo.h"
#include "deportivo.h"
#include "furgoneta.h"

using namespace std;

int main(int argc, char** argv) {
	turismo* t1 = new turismo("toyota", "plomo", "GH89", 4);

	cout << "Herencia publica";
	cout << "\nColor: " << t1->getColor() << endl;
	t1->setColor("Negro");
	cout << "Color: " << t1->getColor() << endl;
	cout << "Modelo: " << t1->retornarModelo() << endl;

	cout << "\nHerencia privada";
	deportivo* d1 = new deportivo("Audi", "Blanco", "KP98", 10);
	cout << "\ncilindrada: " << d1->getCilindrada() << endl;
	cout << "Marca: " << d1->reportarMarca() << endl;

	cout << "\nHerencia protegida" << endl;
	furgoneta* f1 = new furgoneta("Kia", "Verde", "AS12", 1200);
	cout << "Carga: " << f1->getCarga() << endl;
	cout << "Color: " << f1->reportarColor() << endl;

	delete t1;
	delete d1;
	delete f1; // Libera la memoria
	return 0;
}
