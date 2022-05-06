/*
	Transmision de direcciones
	
	Ejemplo: Intercambiar el valor de 2 variables
*/

#include <iostream>
using namespace std;

void intercambio(float *, float *);


int main(){
	float num1 = 20.0, num2 = 6.78;
	
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	intercambio(&num1, &num2); // Llamada a la funcion intercambio
	
	cout << "\n\nDespues del intercambio: \n\n";
	cout << "El nuevo valor de num1: " << num1 << endl;
	cout << "El nuevo valor de num2: " << num2 << endl;
	
	return 0;
}

void intercambio(float *dirNma1, float *dirNma2){
	float aux;
	
	// Intercambiar los valores de las variables
	aux = *dirNma1;
	*dirNma1 = *dirNma2;
	*dirNma2 = aux;
}
