// 3 - clases derivadas.cpp
// Constructores y destructores en clases derivadas

#include <iostream>
#include "claseDerivada.h"
using namespace std;

int main(){
	claseDerivada* ob1 = new claseDerivada(5, 10);

	cout << endl;

	delete ob1;

	return 0;
}

