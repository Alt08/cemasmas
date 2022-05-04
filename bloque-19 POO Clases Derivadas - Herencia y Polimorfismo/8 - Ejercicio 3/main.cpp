#include <iostream>
#include "persona.h"
#include "futbolista.h"
#include "entrenador.h"
#include "medico.h"
using namespace std;

persona* equipo[4];

void viajerE(){
	for(int i=0; i<4; i++){
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << "->";
		equipo[i]->viajar();
	}
}

void entrenamientoE(){
	for(int i=0; i<4; i++){
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << "->";
		equipo[i]->entrenamiento();
	}
}

void partidoFutbolE(){
	for(int i=0; i<4; i++){
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << "->";
		equipo[i]->partidoFutbol();
	}
}

void planificarEntrenamientoE(){
	for(int i=0; i<4; i++){
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << "->";
		((entrenador *)equipo[2])->planificarEntrenamiento(); // Uso de down cats
	}
}

void entrevistaE(){
	for(int i=0; i<4; i++){
		cout << equipo[0]->getNombre() << " " << equipo[0]->getApellido() << "->";
		((futbolista *)equipo[0])->entrevista(); // Uso de down cats
	}
	
	for(int i=0; i<4; i++){
		cout << equipo[1]->getNombre() << " " << equipo[1]->getApellido() << "->";
		((futbolista *)equipo[1])->entrevista(); // Uso de down cats
	}
}

void curarLesionE(){
	for(int i=0; i<4; i++){
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << "->";
		((medico *)equipo[3])->curarLesion(); // Uso de down cats
	}
}

void menu(){
	int opcion;
	
	do{
		cout << "\t.:Menu:." << endl;
		cout << "1. Viaje en equipo" << endl;
		cout << "2. Entrenamiento" << endl;
		cout << "3. Partido de futbol" << endl;
		cout << "4. Planificar entrenamiento" << endl;
		cout << "5. Entrevista" << endl;
		cout << "6. Curar lesion" << endl;
		cout << "7. Salir" << endl;
		cout << "Digite una opcion:  ";
		cin >> opcion;
//		cuot << endl;
		
		switch(opcion){
			case 1: // Viaje en equipo
				viajerE();
				break;
			case 2: // Entrenamiento
				entrenamientoE();
				break;
			case 3: // Partido de futbol
				partidoFutbolE();
				break;
			case 4: // Planificar entrenamiento
				planificarEntrenamientoE();
				break;
			case 5: // Entrevista
				entrevistaE();
				break;
			case 6: // Cerar lesion.
				curarLesionE();
				break;
			case 7: break;
			default: cout << "Opcion no disponible" << endl;
		}
		
		cout << endl;
		system ("pause");
		system("cls");
		
	}while(opcion != 7);
}


int main(int argc, char** argv) {
	equipo[0] = new futbolista("Gonzalo", "Higuain", 30, 9, "Delantero");
	equipo[1] = new futbolista("Paulo", "Dybala", 24, 10, "Delantero");
	equipo[2] = new entrenador("Massimiliano", "Allegri", 50, "Defensiva");
	equipo[3] = new medico("Alex", "Marroni", 59, "Terapeutico",52);
	
	menu();
	
	return 0;
}