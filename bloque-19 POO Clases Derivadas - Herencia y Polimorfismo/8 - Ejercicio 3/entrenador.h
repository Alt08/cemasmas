#include <iostream>
#include "persona.h"
using namespace std;

class entrenador:public persona{
	private:
		string estrategia;
	
	public:
		entrenador(string nombre, string apellidos, int edad, string estrategia):persona(nombre, apellidos, edad){
			this->estrategia = estrategia;			
		}
		
		~entrenador(){
			
		}
		
		void partidoFutbol(){
			cout << "Dirige el partido de futbol" << endl;
		}
		
		void entrenamiento(){
			cout << "Dirige el entrenamiento" << endl;
		}
		
		void planificarEntrenamiento(){
			cout << "Planifica el entrenamiento" << endl;
		}
};
