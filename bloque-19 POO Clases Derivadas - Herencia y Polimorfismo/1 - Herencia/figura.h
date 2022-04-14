#include <iostream>
using namespace std;

class figura{
private:
	int nLados;

public:
	figura(int nLados) {
		this->nLados = nLados;
	}

	~figura() {

	}

	int getnLados() {
		return nLados;
	}
};

