#include <iostream>
using namespace std;
//Busqueda secuencial
//a[3,4,2,1,5]; dato = 4;

int main(){
	int a[] = {3,4,2,1,5};

	char dato = 'a';
	//Busqueda secuencial
	int i = 0;
	char bandera;
	while((bandera == 'F') && (i<5)){
		if(a[i] == dato){
			bandera = 'V';
		}
		i++;
	}

	if(bandera == 'F'){
		cout << "El numero no existe"<<endl;
	}else if(bandera == 'V'){
		cout << "Valor encontrado en la posicion: "<<i-1<<endl;
	}

	return 0;
}