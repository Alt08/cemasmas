//DESARROLLAR UNA FUNCION QUE DETERMINI SI UNA MATRIZ ES SIMETRICA O NO


#include<iostream>

using namespace std;

void pedirDatos();
void comprobarSimetria(int matriz[][100], int, int);

int matriz[100][100], nFilas, nCol;

int main(){
		
	pedirDatos();
	comprobarSimetria(matriz, nFilas, nCol);
	
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de filas: ";
	cin >> nFilas;
	cout << " Digite el numero de columnas: ";
	cin >> nCol;
	
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout << "Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
		}
	}
	
}

void comprobarSimetria(int matriz[][100], int nFilas, int nCol){
	int contador = 0;
	
	if(nFilas == nCol){
		for(int i=0; i<nFilas; i++){
			for(int j=0; j<nCol; j++){
				if(matriz[i][j] == matriz[j][i]){
					contador++;
				}		
			}
		}
	}
	if(contador == nFilas*nCol){
		cout << "La matriz es simetrica";
	}else{
		cout << "La no matriz es simetrica";
	}
	
}


