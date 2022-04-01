#include <iostream>
using namespace std;
/*
	Hacer 2 estructuras
		-> Uno llamada promedio con los siguiente campos
			->nota1
			->nota2
			->nota3
		-> y otro llamado alumno con los siguientes campos
			-> nombre
			-> sexo
			-> edad
	Hacer que la estructura pormedio este anidada a alumno.
	Pedir todos los datos para un alumno y luego: 
		-> Calcular el promedio
		-> imprimir todos los datos
*/

struct promedio{
	double nota1;
	double nota2;
	double nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio promedioAlumno;
}datosAlumno[1];

int main(){
	double promedio;
	double suma;
	for (int i = 0; i < 1; i++){
		fflush(stdin);
		cout << i + 1 <<". Ingresa tu nombre: "; cin.getline(datosAlumno[i].nombre, 20, '\n');
		cout << i + 1 <<". Ingresa tu sexo: "; cin.getline(datosAlumno[i].sexo, 20, '\n');
		cout << i + 1 <<". Ingresa tu edad: "; cin >> datosAlumno[i].edad;
		cout << i + 1 <<". Ingresa tu primera nota: "; cin >> datosAlumno[i].promedioAlumno.nota1;
		cout << i + 1 <<". Ingresa tu segunda nota: "; cin >> datosAlumno[i].promedioAlumno.nota2;
		cout << i + 1 <<". Ingresa tu tercera nota: "; cin >> datosAlumno[i].promedioAlumno.nota3;
		
		suma = datosAlumno[i].promedioAlumno.nota1 + datosAlumno[i].promedioAlumno.nota2 + datosAlumno[i].promedioAlumno.nota3;
		promedio = suma/3;
	}

	cout << "\n ** Imprimiendo datos **" << endl;
	for (int i = 0; i < 1; i++){
		cout << "Nombre: " << datosAlumno[i].nombre << endl;
		cout << "Sexo: " <<   datosAlumno[i].sexo << endl;
		cout << "Edad: " <<   datosAlumno[i].edad << endl;
		cout << "Promedio final: " << promedio;
	}

	

	return 0;
}
