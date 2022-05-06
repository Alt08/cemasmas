/*
	Ejercicio 11:
		Hacer una estructura llamada alumno, en la cual se tendra lo siguiente:
			-> nombre 
			-> edad
			-> promedio
		pedir los datos al usuario para 3 alumnos
		comprobar cual de los 3 alumnos tiene mejor promedio
		posteriormente imprimir los datos del alumno.
		NOTA: Usar punteros a estructuras
*/
#include <iostream>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *punteroAlumno = alumno;

void pedirDatos();
void calcularPromedio(Alumno *);

int main(){
	pedirDatos();
	calcularPromedio(punteroAlumno);
	
	return 0;
}

void pedirDatos(){
	for(int i=0; i<3; i++){
		fflush(stdin);
		
		cout << "Digite su nombre: ";
		cin.getline((punteroAlumno+i)->nombre, 30, '\n');
	
		cout << "Digite su edad: ";
		cin >> (punteroAlumno+i)->edad;
	
		cout << "Digite su promedio: ";
		cin >> (punteroAlumno+i)->promedio;
		cout << endl;
	}
}

void calcularPromedio(Alumno *punteroAlumno){
	float mayor = 0.0;
	int pos = 0;
	
	for(int i=0; i<3; i++){
		if((punteroAlumno+i)->promedio > mayor){
			mayor = (punteroAlumno+i)->promedio;
			pos = i;
		}
	}
	
	cout << "\nEl alumno con mejor promedio es: " << endl;
	cout << "Nombre: " << (punteroAlumno+pos)->nombre << endl;
	cout << "Edad: " << (punteroAlumno+pos)->edad << endl;
	cout << "Promedio: " << (punteroAlumno+pos)->promedio << endl;
	
}
















