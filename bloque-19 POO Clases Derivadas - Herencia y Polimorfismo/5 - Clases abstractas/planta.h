#include <iostream>
#include "serVivo.h"
using namespace std;

class planta:public serVivo{
public:
	void alimentarse() {
		cout << "La planta se alimenta por fotosintesis" << endl;
	}
};

