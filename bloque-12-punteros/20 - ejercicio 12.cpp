/*
	Ejercicio 12:
		Defina una estructura que indique el timepo empleado
		por un ciclicsta en recorrer una etapa.
		La estructura debe tener 3 campos:
			-> horas
			-> minutos
			-> segundos
		Escriba un programa que dado 3 etapas calcule el
		tiempo total empleado en correr todas las etapas
		
		NOTA: Usar puntero
*/

#include <iostream>
using namespace std;

struct Etapa{
	int horas, min, seg;
}etapa[3], *punteroEtapa = etapa;

void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
	pedirDatos();
	calcularTiempo(punteroEtapa);

	return 0;
}

void pedirDatos(){
	cout << "Digite los tiempos empleados: \n";
	for(int i=0; i<3; i++){
		cout << "Horas: "; cin >> (punteroEtapa+i)->horas;
		cout << "Minutos: "; cin >> (punteroEtapa+i)->min;
		cout << "Segundos: "; cin >> (punteroEtapa+i)->seg;
		cout << endl;
	}
}

void calcularTiempo(Etapa *){
	int horasT=0, minutosT = 0, segundosT = 0;
	
	for(int i=0; i<3; i++){
		horasT += (punteroEtapa+i)->horas;
		minutosT += (punteroEtapa+i)->min;
		
		if(minutosT >= 60){
			minutosT -= 60;
			minutosT++;
		}
	}
	
	cout << "\nMostrando el tiempo total:";
	cout << "\nHoras: " << horasT << endl;
	cout << "Minutos : " << minutosT << endl;
	cout << "Segundos: " << segundosT << endl;
}














