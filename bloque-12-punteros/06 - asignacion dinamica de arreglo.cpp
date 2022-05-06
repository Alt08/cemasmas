/*
	Asignacion dinamica de arreglos
	
	new: Reserva el numero de bytes solicitando por la declaracion
	delete: liberar un bloque de bytes reservado con anterioridad
	
	ejemeplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamica
*/

#include <iostream>
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalificaciones, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; // Liberando el espacio en bytes utilizados anteriormente

	return 0;
}

void pedirNotas(){
	cout << "Digite el numero de calificaciones: ";
	cin >> numCalificaciones;
	
	calif = new int[numCalificaciones];
	
	for(int i=0; i<numCalificaciones; i++){
		cout << "Ingrese una nota: ";
		cin >> calif[i];
	}
}

void mostrarNotas(){
	cout << "\n\nMostrando notas del usuario:\n";
	for(int i=0; i<numCalificaciones; i++){
	 	cout << calif[i] << endl;
	}
}