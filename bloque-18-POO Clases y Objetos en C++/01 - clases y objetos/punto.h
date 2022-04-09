// Declaracion de una clase
// Toda clase de tener un constructor

/*
	Visivilidad (Encapsulamiento)
		-> public: Es manipulado al antojo del usuario
		-> private: Pueden ser accedidos por metodos de la misma clase
		-> protecte: Puede ser accedidas por la misma clase o las hijas (heredadas) se explica en el video de "HERENCIA"
*/

class punto{
// Atributos - lo vamos a poner encapsuldas - mas detalles en proximos videos
private:
    int x, y;

// Metodos
public:
    // Constructor forma 1
    // Variables con datos no inicializados - estatico
    punto(int _x, int _y){ 
		// Constructor1
        x = _x;
        y = _y;
    }

    // Constructor forma 2
    // Variables con datos inicializados - dinamico
    punto(){
        x = y = 0;
    }

    void setX(int valorX); // Establecemos el valor de x
    void setY(int valorY); // Establecemos el valor de Y

    // Funciones declaradas
    int getX(); // Obtener el valor de x
    int getY(); // Obtener el valor de y
};