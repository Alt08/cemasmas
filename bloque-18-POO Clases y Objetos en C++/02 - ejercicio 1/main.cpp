#include <iostream>
#include "diaAnio.h"
using namespace std;
/*
	Ejercicio 1
		Definir una clase DiaAnio con los atributos 
			-> mes
			-> dia
		Los metodos:
			-> igual()
			-> visualizar()
		El mes se registrar como un valor entero (1: enero, 2: febrero, etc...)
		El dia del mes se registrar en otra variable 
			-> entera dias
		Escribir un programa que compruebe si una fecha es su cumpleaños
*/

int main(int argc, char** argv) {
	// Declarando 2 objetos
	DiaAnio* hoy;
	DiaAnio* cumple;

	int d,m; // Declaracion de variable dia y mes

	// Fecha actual
	cout << "Introduzca fecha  actual, dia actual: "; cin>>d;
	cout << "Introduzca fecha  actual, mes actual: "; cin>>m;
	// Creando el objeto y llamando al constructor DiaAnio, de la siguiente manera
	hoy = new DiaAnio(d,m);

	// Tu cumpleanios
	cout << "\nIntroduzca fecha  tu cumpleaños, dia: "; cin >> d;
	cout << "Introduzca fecha  tu cumpleaños, Mes: "; cin >> m; 
	// Creando el objeto y llamando al constructor DiaAnio, de la siguiente manera
	cumple = new DiaAnio(d,m);

	// Mostrando la fecha actual
	hoy ->visualizar();
	cout << endl;

	// fecha cumpleanios
	cumple -> visualizar();

	if(hoy->igual(*cumple)){
		cout << "\nFeliz cumpleaños!!!" << endl;
	}else{
		cout << "Tenga un buen dia";
	}
	

	return 0;
} 