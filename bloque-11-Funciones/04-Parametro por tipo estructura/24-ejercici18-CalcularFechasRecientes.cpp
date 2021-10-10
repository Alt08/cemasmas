/*
	EJERCICIO 18: Escriba una funcion en c++ llamada mayor()
					-que devuelva la fecha mas recientre de cualquier par de fechas que se le transmita
				  POR EJEMPLO
				  	si se transmite las fecha 11/3/2021 a mayor(), sera devuelta la segunda fecha
					
*/

#include <iostream>
using namespace std;

struct fecha{
	int dia, mes, anio;
}f1, f2;

void pedirDatos();
fecha mayor(fecha, fecha);
void mostrar(fecha);

int main(){

	pedirDatos();
	fecha x = mayor(f1,f2);
	mostrar(x);

	return 0;
}

void pedirDatos(){
	cout << "Digite la primera fecha: " << endl;
	cout << "Dia: "; cin >> f1.dia;
	cout << "Mes: "; cin >> f1.mes;
	cout << "Anio: "; cin >> f1.anio;
	
	cout << "\nDigite la segunda fecha: " << endl;
	cout << "Dia: "; cin >> f2.dia;
	cout << "Mes: "; cin >> f2.mes;
	cout << "Anio: "; cin >> f2.anio;
}

fecha mayor(fecha f1, fecha f2){
	fecha mayorFecha;
	
	
	if((f1.anio >= f2.anio) && (f1.mes >= f2.mes)&&(f1.dia >= f2.dia)){
		mayorFecha = f1;
	}else{
		mayorFecha = f2;
	}
	
	return mayorFecha;
}

void mostrar(fecha x){
	cout << "\nLa fecha mas reciente es: " << x.dia << "/" << x.mes << "/" << x.anio << endl;
}







