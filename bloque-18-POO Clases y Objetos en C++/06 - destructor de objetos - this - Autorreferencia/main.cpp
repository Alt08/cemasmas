// Destructor de objetos
#include <iostream>
#include "perro.h"

using namespace std;

int main(int argc, char** argv) {
	// Forma estatica
	perro perro1("fido", "Doberman");
	perro1.mostrarDatos();
	perro1.jugar();
	// El objeto estatico no es necesario destruirlo
	// Ya que este se detruye con el metodo declarado en perro.h

	// Forma dinamica
	perro* perro2 = new perro("sasa", "pitbull");
	perro2->jugar();
	// Destruyendo un objeto dinamico
	delete perro2;
	
	// Una vez detruido el objeto no se puede llamar nuevamente
	// Dara error 
	// Se debe destruir el objeto cuando ya se necesite
	perro2->jugar();

	return 0;
}