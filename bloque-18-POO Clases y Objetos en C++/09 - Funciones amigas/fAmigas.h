#include <iostream>
using namespace std;

class personaje{
	// Declarando la funcion que sera amiga
	friend void modificar(personaje & , int, int);

	private:
		int ataque;
		int defensa;
	
	public:
		personaje(int ataque, int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
		
		void mostrarDatos(){
			cout << "Ataque = " << ataque << endl;
			cout << "Defensa = " << defensa << endl;
		}
};