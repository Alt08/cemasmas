#include <iostream>
#include "persona.h"
using namespace std;

class futbolista:public persona{
	private:
		int dorsal;
		string posicion;
	public:
		futbolista(string nombre, string apellidos, int edad, int dorsal, string posicion):persona(nombre, apellidos, edad){
			this->dorsal = dorsal;
			this-> posicion = posicion;
		}
		~futbolista(){
		}
		
		void entrevista(){
			cout << "Da entrevista" << endl;
		}
		
		void partidoFutbol(){
			cout << "Juega el partido de futbol" << endl;
		}
		
		void entrenamiento(){
			cout << "Entrena" << endl;
		}
		
		
};