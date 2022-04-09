#include <iostream>
using namespace std;

class Direccion{
	private:
		string direccion;
	
	public:
		Direccion(string direccion){
			this->direccion = direccion;
		}
	
	// constructor por defecto
	Direccion(){
	}
	
	// Creacion del destructor
	~Direccion(){
	}
	
	//Metodo para obtener direccion
	string getDireccion(){
		return direccion;
	}
};