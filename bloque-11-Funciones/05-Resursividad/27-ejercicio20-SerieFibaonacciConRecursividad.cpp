/*
	Ejercicio 20: Realice una funcion  recursiva para la serie fibonacci esta formada por la secuencia de numeros
				  0,1,1,2,3,5,8,13,21,34
	
	fibonacci = n									, si n < 2
				fibonacci(n -1)+fibonacci(n -2)		, si n >= 2

*/


#include <iostream>
using namespace std;

int fibonacci(int);

int main(){
	int nElementos;
	
	do{
		cout << "Digite el numero de elementos: ";
		cin >> nElementos;
	}while(nElementos <= 0);
	
	cout << "\nSerie Fibonacci: ";
	for(int i=0; i<nElementos; i++){
			cout << fibonacci(i) << ", ";
	}

	return 0;
}

//Funcion recursiva
int fibonacci(int n){
	if(n < 2){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}













