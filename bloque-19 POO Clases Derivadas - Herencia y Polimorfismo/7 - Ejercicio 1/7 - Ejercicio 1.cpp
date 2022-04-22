// 7 - Ejercicio 1
/*
	Ejercicio 1:
		considere la siguiente relacion de herencia. defina las clases
			-> mamifero
			-> felino
			-> gatoDomestico
		Decida que atributos y metodos incluir de tal manera que su programa.

	A) Declarar un objeto llamado minino de tipo gatoDomestico y otro llamado estrellaCirco de tipo felino
	B) Imprimir la dieta de minino y de estrellaCirco
	C) Imprimir el año y lugar de nacimiento de minimo y de estrellaCirco
	D) Cambiar el nombre del dueño de minino
	E) Imprimir la raza de minino y de estrellaCirco
	F) Cambiar el nombre del circo en el que actua estrellaCirco
	
*/

#include <iostream>
#include "gatoDomestico.h"
#include "felino.h"
#include <string>
using namespace std;

int main(int argc, char** argv){
	gatoDomestico* gd = new gatoDomestico(2015, "mexico", "persa", "van");
	felino* estrallaCirco = new felino(2014, "india", "vengala", "espectacular");

	cout << "--- DIETA --- " << endl;
	cout << "Gato: " << gd->imprimirDieta() << endl;
	cout << "Felino: " << estrallaCirco->imprimirDieta() << endl;
	
	cout << "\nAnio nacimiento - lugar de nacimientos: " << endl;
	cout << "Felino: " << gd->getAnioNacimiento() << "-" << gd->getLugarNacimiento() << endl;
	cout << "Felino: " << estrallaCirco->getAnioNacimiento() << "-" << estrallaCirco->getLugarNacimiento() << endl;
	
	cout << "\n---- Cambiar nombre del duenio ---- ";
	string nuevoDuenio;
	cout << "\nDigite el nombre del nuevo duenio: ";
	getline(cin, nuevoDuenio);
	gd->setNombreDuenio(nuevoDuenio);
	cout << "\nEl nuevo nombre del duenio es: " << gd->getNombreDuenio() << endl;
	

	cout << "\nRaza" << endl;
	cout << "Gato: " << gd->getRaza() << endl;
	cout << "Felino: " << estrallaCirco->getRaza() << endl;

	cout << "\n---- Cambiar nombre del circo ----" << endl;
	string nuevoCirco;
	cout << "Digite el nombre del nuevo circo: ";
	getline(cin, nuevoCirco);
	estrallaCirco->setNombreCirco(nuevoCirco);
	cout << "\nEl nuevo nombre del circo es: " << estrallaCirco->getNombreCirco() << endl;

	delete gd;
	delete estrallaCirco;


	return 0;
}