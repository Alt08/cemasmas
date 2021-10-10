//Elevar al cuadrado todos los elementos de una matriz


#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[][3], int, int);
void matrizElevada(int matriz[][3],int, int);
void matrizElevadaFinal(int matriz[][3],int, int);

int main(){
	const int numeroFilas = 2;
	const int numeroColumna = 3;
	
	int matriz[numeroFilas][numeroColumna] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(matriz, numeroFilas, numeroColumna);
	matrizElevada(matriz, numeroFilas, numeroColumna);
	matrizElevadaFinal(matriz, numeroFilas, numeroColumna);
	
	return 0;
}

void mostrarMatriz(int matriz[][3], int numeroFilas, int numeroColumna){
	cout << "Matriz original" << endl;
	for(int i=0; i<numeroFilas; i++){
		for(int j=0; j<numeroColumna; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
};

void matrizElevada(int matriz[][3],int numeroFilas, int numeroColumna){
	for(int i=0; i<numeroFilas; i++){
		for(int j=0; j<numeroColumna; j++){
			matriz[i][j] *= matriz[i][j];
		}
		cout << endl;
	}
};

void matrizElevadaFinal(int matriz[][3],int numeroFilas, int numeroColumna){
	cout << "Matriz elevada al cuadrado: " << endl;
	for(int i=0; i<numeroFilas; i++){
		for(int j=0; j<numeroColumna; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
};