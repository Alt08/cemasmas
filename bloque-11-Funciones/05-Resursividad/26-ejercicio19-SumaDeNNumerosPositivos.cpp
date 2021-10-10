/*
	Ejercicio 19: Realice una funcion recursiva que sume los primeros n enteros positivos
	NOTA: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse
	mediante la siguinete recurrencio:
	
	suma(n) = 1						, si n=1
			  n+suma(n-1)			, si n>1
*/

#include <iostream>
using namespace std;

int sumar(int);

int main(){
	int nElementos;
	
	do{
		cout << "Digite el numero de elementos: ";
		cin >> nElementos;
		
	}while(nElementos <= 0);
	
	cout << "\nLa suma es: " << sumar(nElementos);

	return 0;
}

int sumar(int n){
	int suma = 0;

	if(n == 1){
		suma =1;
	}else{
		suma = n + sumar(n-1);
	}
	
	return suma;
}














