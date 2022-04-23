#include <iostream>
#include "alumno.h"
#include "deportista.h"
using namespace std;

class becaDeporte:public alumno, public deportista{
private:
	float montoBeca;

public:
	becaDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca):alumno(nombreCarrera), deportista(nombreEntrenador) {
		this->montoBeca = montoBeca;
	}

	~becaDeporte(){}

	void mostrarDatos() {
		alumno::mostrarDatos();
		deportista::mostrarDatos();
		cout << "Monto beca: " << montoBeca << endl;
	}

	void setMontoBeca(float n) {
		float incremento = (montoBeca*n) / 100;
		this->montoBeca += incremento;
	}

	float getMontoBeca() {
		return montoBeca;
	}
};

