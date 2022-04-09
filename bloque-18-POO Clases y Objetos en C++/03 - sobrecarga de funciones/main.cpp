// Sobrecarga de funciones
// la sobrecarga de funciones es la declaracion de varios metodos con el mismo nombre
// Sin embargo estas se diferencian por los parametros que estas reviven
// Se pueden sobrecargar metodos contructuros o metodos normales
#include <iostream>
#include "persona.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	persona* persona1 = new persona("Ale", 21);
	persona1->correr();
	
	persona* persona2 = new persona("12");
	persona2->correr(12);
	
		
	return 0;
}

// 