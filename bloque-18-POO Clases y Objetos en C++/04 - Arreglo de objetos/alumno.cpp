#include <iostream>
#include "alumno.h"

using namespace std;

void alumno::pedirDatos(){
	cout << "Tu calificacion de matematicas: "; cin >> calmate;
	cout << "Tu calificacion de programacion: "; cin >> calPro;
}

void alumno::mostrarDatos(){
	cout << "Nota matematicas: " << calmate << endl;
	cout << "Nota programacion: " << calPro <<endl;
	cout << "Promedio: " << (calmate + calPro)/2 << endl;
}