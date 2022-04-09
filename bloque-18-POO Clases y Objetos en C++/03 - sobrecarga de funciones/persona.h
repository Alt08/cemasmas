//Implementacion de la clase persona
#include<iostream>

using namespace std;

class persona{
	// Atributos
	private:
		string nombre;
		int edad;
		string dni;
	
	// Metodos
	public:
	//	Declarando el constructor
	// Constructor 1
	persona(string _nombre, int _edad){ // El constructor debe tener el mismo nombre que la clase
		nombre = _nombre;
		edad = _edad;
	}
	
	// Constructor 2
	persona(string _dni){
		dni = _dni;
	}
	
	//	Acciones
	//	Metodo sin parametro
	void correr(){
		cout << "Soy " << nombre << ", tengo " << edad << " años jaja"; 
	}
	
	void correr(int km){
		cout << "\nHe corrido " << km << "KM" << endl;
	}
};

// Para diferenciar las sobrecargar de metodos se debe diferencia por la cantidad
// de parametros que esta contiene de los contrario dara error al compilar