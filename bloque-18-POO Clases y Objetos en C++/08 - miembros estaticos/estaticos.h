#include <iostream>
using namespace std;

class estatico{
	// Atributos
	private:
		// Los datos estaticos tienen un valor unico asignado, no se puede cambiar
		static int contador; // Declaracion de un atributo estatico 
		// Los datos estatico se inicializan desde fuera (En otro archivo)
	
	// Metodo
	public:
		// Contructor
		estatico(){
			contador ++;
		}
	
		int getContador(){
			return contador;
		}
		
		// Metodos estaticos
		static int sumar(int n1, int n2){
			int suma = n1+n2;
			return suma;
		}
};