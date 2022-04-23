// 7 - Ejercicio 2
/*
	Ejercicio 2:
		Considere la siguiente relacion de herencia, la cual involucra tres clases:
			-> Alumno
			-> Deportista
			-> BecadoDeporte
		Esta ultima representa a aquellos alumnos que son deportistas y que por esa
		razon han recibido una beca especial del gobierno para premiar sus esfuerzos.
		Decida que atributos y metodos incluir de tal manera que su programa pueda:
			A) Declarar dos objetos llamados:
				-> alumnoJuan
				-> alumnoPedro
			B) Declarar un objeto llamado:
				-> deporLuis 
					de tipo deportista
			C) Declarar dos objetos llamados:
				-> bdAna
				-> bdCarmen 
					de tipo becadoDeportista
			D) Imprimir los datos de todos los objetos declarados
			E) Actualizar el nombre de la carrera que estan estudianto:
					-> alumnoJuan 
					-> bdAna
				El dato dado por el usuario sera el nombre de la nueva carrera.
			F) Actualiza el nombre del entrenador:
					-> deporLuis
					-> bdCarmen
				El dato dado por el usuario sera el nombre del nuevo entrenador.
			G) Actualilzar el monto de la beca de:
					-> bdAna
					-> bdCarmen
				El dato dado por el usuario sera el porcentaje de incremento de la beca acutal
*/ 

#include <iostream>
#include <string>
#include "alumno.h"
#include "deportista.h"
#include "becaDeporte.h"

using namespace std;

int main(int argc, char** argv){
	alumno* alumnoJuan = new alumno("Programacion");
	alumno* alumnoPedro = new alumno("Sistema");
	deportista* deporLuis = new deportista("Popeye");
	becaDeporte* bdAna = new becaDeporte("Administracion", "Luis", 1200);
	becaDeporte* bdCarmen = new becaDeporte("Contabilidad", "La roca", 1350);

	cout << "--- Mostrando Datos ---" << endl;
	cout << "Mostrando datos del alumno juan: " << endl;
	alumnoJuan->mostrarDatos();
	cout << "Mostrando datos del alumno pedro: " << endl;
	alumnoPedro->mostrarDatos();
	cout << "Mostrando datos de deportista luis: " << endl;
	deporLuis->mostrarDatos();
	cout << "Mostrando datos de bd Ana: " << endl;
	bdAna->mostrarDatos();
	cout << "Mostrando datos de bd Carmen: " << endl;
	bdCarmen->mostrarDatos();

	string nuenvaCarrera;
	cout << "\nDigite la nueva carrera de alumno juan: ";
	getline(cin, nuenvaCarrera);
	alumnoJuan->setNombreCarrera(nuenvaCarrera);
	cout << "Digite la nueva carrera de bd Ana: ";
	getline(cin, nuenvaCarrera);
	bdAna->setNombreCarrera(nuenvaCarrera);
	cout << "\nLa nueva carrera de alumno juan es: " << alumnoJuan->getNombreCarreta() << endl;
	cout << "La nueva carrera de bdAna es: " << bdAna->getNombreCarreta() << endl;

	string nuevoEntrenador;
	cout << "\nDigite el nuevo entrenador deporLuis: ";
	getline(cin, nuevoEntrenador);
	deporLuis->setNombreEntrenador(nuevoEntrenador);
	cout << "Digite el nuevo entrenador de bdCarmen: ";
	getline(cin, nuevoEntrenador);
	bdCarmen->setNombreEntrenador(nuevoEntrenador);
	cout << "\n El nuevo entrenador de deporLuis es: " << deporLuis->getNombreEntrenador() << endl;
	cout << "El nuevo entrenador de bdCarmen es: " << bdCarmen->getNombreEntrenador();

	int incremento;
	cout << "\nDigite el incremento de bdAna: ";
	cin >> incremento;
	bdAna->setMontoBeca(incremento);
	cout << "Digite el incremento de bdCarmen: ";
	cin >> incremento;
	bdCarmen->setMontoBeca(incremento);
	cout << "\nEl nuevo monto beca de bdAna es: " << bdAna->getMontoBeca() << endl;
	cout << "El nuevo monto beca de bdCarmen es: " << bdCarmen->getMontoBeca() << endl;



	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;

	return 0;
}