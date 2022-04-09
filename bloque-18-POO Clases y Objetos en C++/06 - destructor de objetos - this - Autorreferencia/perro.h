// Desctructor de objetos
using namespace std;

class perro{
	// Atributos
	private:
		string nombre, raza;

	// Metodos
	public:
		perro(string _nombre, string _raza){ // constructor
			nombre = _nombre;
			raza = _raza;
		}

	
	~perro(){ // Destructor de objetos
		// Sirve para liberar memoria al crear objeto, cuando el programa finaliza
		// Crear un desctructor por cada clase creada
		
	}

	void mostrarDatos();
	void jugar();
};