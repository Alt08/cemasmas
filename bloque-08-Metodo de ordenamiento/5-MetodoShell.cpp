#include <iostream>
using namespace std;
/*
	1. se divide la lista original en n/2 grupos de dos, considerando 
		un incremento o salto entre los elementos de n/2
	2. se clasifica cada grupo por separado, comparando las parejas de 
		elemento y si no estan ordenados  se intercambian
	3. se divide ahora la lista en la mitad de grupos n/4  con salto entre 
		los elementos tanbien la mitad n/4 y nuevamente se clasifica cada 
		grupo por separado.
	4. asi sucesivanmente se sigue dividiendo la lista en la mitad de grupos
		que en el recorrido anterior con un salto decreciente que en la mitad
		que el salto anterior y luego clasificando cada grupo por separado.
	5. El algoritmo termina cuando el tama;o del salto es 1.
	
	---------- EJEMPLO ----------
		
		[6, 1, 5, 2, 3, 4, 0]
	---------- RESULTADO ----------
		[0, 1, 2, 3, 4, 5, 6]		
*/

void intercambio(float &x, float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void ordenacionShell(float a[], int n){
	int salto, i,j,k;
	salto = n/2;
	while(salto>0){
		for(i=salto; i<n; i++){
			j = i - salto;
			while(j>=0){
				k = j + salto;
				if(a[j] <= a[k]){//Elementos ordenados
					j = -1;
				}else{//Los elementos estan desordenados
					intercambio(a[j], a[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
}


int main(){

	float arreglo[] = {5,89,65,848,54,13,546,3156,46,5665};
	ordenacionShell(arreglo, 10);
	
	cout << "Arreglo ordenado" << endl;
	for(int i=0; i<10; i++){
		cout << arreglo[i]<<"|";
	}
	

	return 0;
}