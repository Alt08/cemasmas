#include <iostream>
using namespace std;
/*
	Haver un arreglo de estructura llamada atketa para N atletas que contenga los siguientes campos
		-> nombre
		-> pais
		-> numero de medallas
	devuelva los datos (nombre y pais) del atleta que ha ganado el mayor numero de medallas
*/

struct atletas{
	char nombre[20];
	char pais[20];
	int medallas;
}datosAtletas[100];


int main(){
	int NumeroParticipantes, masMedallas = 0, posicion; // Declaracion de la numero de participante

	cout << "Numero de paticipantes: "; // Mensaje pidiendo cantidad de partipante
	cin >> NumeroParticipantes; // Guardando dato introducido por el usuario

	// Recorriendo N cantidad de participantes
	for (int i = 0; i < NumeroParticipantes; i++){
		fflush(stdin);
		cout << "Ingresa tu nombre: ";
		cin.getline(datosAtletas[i].nombre, 20, '\n');
		cout << "Ingresa tu pais: ";
		cin.getline(datosAtletas[i].pais, 20, '\n');
		cout << "Cantidad de medallas ganadas: ";
		cin >> datosAtletas[i].medallas;

		if (datosAtletas[i].medallas > masMedallas){
			masMedallas = datosAtletas[i].medallas;
			posicion = i;
		}
	}

	// Recorriendo datos introducidos
	cout << "\nDatos del atleta con mas medallas" << endl;
	cout << "Nombre: " << datosAtletas[posicion].nombre << endl;
	cout << "Pais: " << datosAtletas[posicion].pais << endl;
	cout << "Medallas: " << datosAtletas[posicion].medallas;

	return 0;
}
