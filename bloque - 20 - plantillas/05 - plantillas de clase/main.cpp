/*
	Las plantillas de clases permiten definir versiones de una misma
	clase que difieren en el tipo de datos de algunos de sus miembros.
	Es decir se crea el modelo de una clase el cual permitira definir 
	distintas instancias de la misma para diferentes tipos de datos.
*/

#include <iostream>
#include "plantillaEjemplo.h"

// Para declrar una plantilla de clase se utiliza lo siguiente

/*
	template <class T>
	class plantillaClase{
		private:
			T atributo;
			...
		
		public:
			platillaClase();
			T metodo1();
			void metodo2(T valor);
			...
	};

*/

int main(int argc, char** argv) {
	plantillaEjemplo <int, float> ob1(5, 9.87);

	ob1.mostrarDatos();
	
	return 0;
}