/*
	Una plantilla de funcion es un modelos de funcion que el compiladode c++ usara
	para construir diferentes versiones de una misma funcion.
	Segun los tipos de datos que se especifiquen al invocar a la misma.
	La plantilla permite escribir funciones que defieren exclusivamente 
	en el tipo de datos que manejan.
*/

#include <iostream>
using namespace std;

	// Sintaxis basica de la plantilla
	//				Identificador (algo asi como un apodo)	
	//					^
	//					|
	// template <class T1, class T1, ... , class Tn>				-> Forma 1 -> Recomendado usar cuando se usan plantillas de clases
	// template <typename T1, typename T1, ... , typename Tn>		-> Forma 2 -> Recomendado usar cuando se usan plantillas de funciones
	// Se puede usar cualquiera de los 2

// Mayor de 2 elementos
// Las plantillas suelen incluirse en archivos header (.h)
/*Plantilla de funcion*/
template <class T> // La T puede tomar forma de int, float, dooble...
// T mayor(T dato1, T2 dato2){  -> Diferentes tipos de datos T y T2
T mayor(T dato1, T dato2){ // -> Mismos tipos de datos	T y T
	if(dato1 >= dato2){
		return dato1;
	}else{
		return dato2;
	}
}

int main(){
	cout << "El mayor de 2 numeros es: " << mayor(5,9) << endl;
	cout << "El mayor de 2 numero reales es: " << mayor (9.78, 4.54) << endl;
	cout << "El mayor de 2 caracteres es: " << mayor ('r', 'z') << endl;
	
	/*
		posibles error
		
		Los datos introducidos deben ser del mismo tipo, de lo contrario dara error
		template <class T> // La T puede tomar forma de int, float, dooble...
		
		CORRECTO - tipo de dato int, int 
		cout << "El mayor de 2 numeros es: " << mayor(5,9) << endl;
		INCORRECTO - tipo de datos int, float
		cout << "El mayor de 2 numeros es: " << mayor(5,9.5) << endl;
	*/
	
	
	return 0;
}
