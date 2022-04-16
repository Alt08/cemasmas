#include <iostream>
#include "animal.h"
using namespace std;

class animalCarnivoro:public animal{
public:
	void alimentarse() {
		cout << "Los carnivoros comen carne" << endl;
	}
};

