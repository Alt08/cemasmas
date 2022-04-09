// Haciendo uso de las clases compuestas
#include <iostream>
#include "expediente.h"
#include "direccion.h"
using namespace std;

class estudiante{
	private:
		string codigo;
		float promedio;
		expediente exp;
		Direccion dir;
	
	public:
		// Inicializando clase compuesta
		estudiante(string codigo, float promedio, int nroExpediente, string direccion):exp(nroExpediente), dir(direccion){
			this->codigo = codigo;
			this->promedio = promedio;
		}

	void motrarDatos(){
		cout << "Codigo: " << codigo << endl;
		cout << "Promedio: " << promedio << endl;
		cout << "Expediente: " << exp.getNroExpediente() << endl;
		cout << "Direccion: " << dir.getDireccion() << endl;
	}
};