#include <iostream>
using namespace std;

class claseBase{
private:
	int numero;

public:
	// Constructor
	claseBase(int numero) {
		this->numero = numero;
		cout << "Constructor de la clase base" << endl;
	}

	//Destructor
	~claseBase() {
		cout << "destructor de la clase base" << endl;

	}


};

