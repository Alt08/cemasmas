#ifndef poligono_h
#define poligono_h


#include <iostream>
using namespace std;

class poligono{
public:
	virtual float perimetro() = 0;
	virtual float area() = 0;
};


#endif // !poligono_h