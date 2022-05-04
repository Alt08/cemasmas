#include <iostream>
using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int *dirNumeros;
	
	dirNumeros = numeros;
	
	for(int i=0; i<5; i++){
		// cout << "Elemento del vector [" << i << "]: " << *dirNumeros++ << endl;
		cout << "Posicion de memoria " << numeros[i] << " es: " << dirNumeros++ << endl;
	}
		
	return 0;
}