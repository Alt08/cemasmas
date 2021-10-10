/*
	Factorial de un numero 3! = 3*2*1
	
	factorial(n) = 1 					,si n=0
					n*factorial(n-1)	,si n>0
*/

#include <iostream>
using namespace std;

int factorial(int);

int main(){

	cout << "Factorial: " << factorial(5);

	return 0;
}

int factorial(int n){
	if(n == 0){//Caso base
		n = 1;
	}else{//Caso general
		n = n * factorial(n - 1);
	}
	
	return n;
}
