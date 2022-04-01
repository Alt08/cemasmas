#include <iostream>
using namespace std;
/*
	Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
	La estructura debe tener 3 campo:
		--> horas
		--> minutos
		--> segundos
	Escriba un programa de dado N etapas calcule el tiempo total empleado en correr todas las etapas
*/

struct etapas{
	float horas;
	float minutos;
	float segundos;
} datoEtapas[100];

int main(){
	int etapas, tiempoPorEtapaHora = 0, tiempoPorEtapaMinutos = 0, tiempoPorEtapaSegundos = 0;
	cout << "Cantidad de etapas: "; cin >> etapas;

	for (int i = 0; i < etapas; i++){
		cout << "Etapa: " << i+1 << endl;
		cout << "Digite una cantidad en Horas: ";    cin >> datoEtapas[i].horas;
		cout << "Digite una cantidad en Minutos: ";  cin >> datoEtapas[i].minutos;
		cout << "Digite una cantidad en Segundos: "; cin >> datoEtapas[i].segundos;

		tiempoPorEtapaHora += datoEtapas[i].horas;
		tiempoPorEtapaMinutos += datoEtapas[i].minutos;
		if (tiempoPorEtapaMinutos >= 60){
			tiempoPorEtapaMinutos -= 60;
			tiempoPorEtapaHora++;
		}
		tiempoPorEtapaSegundos += datoEtapas[i].segundos;
		if (tiempoPorEtapaSegundos >= 60){
			tiempoPorEtapaSegundos -= 60;
			tiempoPorEtapaMinutos++;
		}
		cout << endl;
	}

	cout << "\nImprimiendo tiempo total de las etapas" << endl;

	cout << "Ttiempo total en hora: " << tiempoPorEtapaHora << endl;
	cout << "Ttiempo total en minutos: " << tiempoPorEtapaMinutos << endl;
	cout << "Ttiempo total en segundos: " << tiempoPorEtapaSegundos;

	return 0;
}
