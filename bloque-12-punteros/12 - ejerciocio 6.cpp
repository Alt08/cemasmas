/*
	Ejercicio 6:
		Hacer una ufncion para almacenar N numero en un arreglo dinamico
		posteriormente en otra funcion buscar un numero en particular
		NOTA: Puedes utilizar cualquier metodo de busqueda (Secuencial o Binaria)
*/

#include <iostream>
using namespace std;

void pedirDatos();
void buscarElemento(int *, int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	buscarElemento(elemento, nElementos);
	
	delete[] elemento;
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de elementos del arreglo: ";
	cin >> nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout << "Digite un numero[" << i << "]: ";
		cin >> *(elemento+i);
	}	
}

void buscarElemento(int *elemento, int nElemento){
	int dato, i;
	bool band = false;
	
	cout << "\n\nDigite un numero a buscar: ";
	cin >> dato;
	
	// Busqueda secuencial
	i = 0;
	while((i < nElementos) && (band == false)){
		if(*(elemento+i) == dato){
			band = true;
		}
		i++;
	}
	
	if(band == false){
		cout << "El numero " << dato << " no existe en el arreglo" << endl;
	}else{
		cout << "El numero: " << dato << " si existe en la posicion: " << i-1 << endl;
	}
}
