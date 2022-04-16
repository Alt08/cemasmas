#include <iostream>
#include "animal.h"
using namespace std;

class animalHerbivoro:public animal{
public:
	void alimentarse() {
		cout << "Los herbivoros comen hierva" << endl;
	}
};