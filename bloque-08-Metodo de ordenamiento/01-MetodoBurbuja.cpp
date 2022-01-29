// metodo burubuja
#include <iostream>
using namespace std;

int main(){
	// Declaramos el arreglo de numeros
	int numeros[6];
	// Declaramos las variales para usarlos en los for y la variable auxiliar
	int i, j, aux;
	for(i=0; i<6; i++){
		cout<<"Introduce una lista de numeros, maximo 6: "<<endl;
		cin>>numeros[i];
	}
	// Iniciamos con el primer for - EJECUTA EL SEGUNDO FOR 5 VECES
	 for(i=0; i<6; i++){
		//  Recorre cada posicion del arrglo
		cout<<"------------------ITERACION: "<<i<<"----------------------------------"<<endl;
		for(j=0; j<6; j++){
			// Compara si el elemento en la posicion 0
			// Es mayor al elemento de la posicion 0+1, que seria  la siguiente posicion 1
			// Y asi sucesivamente has llegar a la ultima posicion
			// es mayor a 1+1, haciendo referencia a las posiciones de los elementos
			// 5, 3, 2, 1, 4
			// 0, 1, 2, 3, 4
			if(numeros[j] > numeros[j+1]){
				// En la variable aux guardamos el valor actual del arreglo que seria "5" al iniciar y esta cambiara con cada iteracion
				aux = numeros[j];
				cout<<"aux: "<<aux<<endl;
				// numeros[j] tendra un nuevo valor el cual sera el siguiente en la posicion, empezo con el valor 5
				// con cada iteracion ira cambiando al numero que sigue, que sera 3 y asi sucesivamente
				numeros[j] = numeros[j+1];
				cout <<"Numeros[j+1]: "<<numeros[j]<<endl;
				// Numero[j+1] que ahora es la segunda posicion sera igual a aux, repitiendose hasta terminar el bucle
				numeros[j+1] = aux;
				cout<<"numeros[j+1]: "<<numeros[j+1]<<endl;
			}
			cout<<endl;
		}
	}

	cout<<"Orden Ascendente: ";
	for(i=0; i<6; i++){
		cout<<numeros[i]<<" ";
	}

	cout<<"\nOrden Descendente: ";
	for(i=5; i>=0; i--){
		cout<<numeros[i]<<" ";
	 }
	return 0;
}
