#include <iostream>
using namespace std;


class avion{
private:
	string modelo;

public:
	avion(string modelo) {
		this->modelo = modelo;
	}
	~avion(){

	}
	void indicarAvion() {
		cout << "Desplazamiento por aire" << endl;
	}
	string getModelo() {
		return modelo;
	}
};
