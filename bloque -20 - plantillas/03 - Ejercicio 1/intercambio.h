#include <iostream>

//Plantilla de funcion
template <typename T>

void intercambio(T &num1, T &num2){
	T aux;
//         1
	aux = num1;
//   1      6
	num1 = num2;
//   6      
	num2 = aux;
}