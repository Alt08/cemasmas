// Autorrefencia del objetos: this
using namespace std;

class perro{
	// Atributos
	private:
		string nombre, raza;

	// Metodos
	public:
		perro(string nombre, string raza){ // constructor
			// Indica que es mienbro de la clase
			this->nombre = nombre;
			this->raza = raza;
		}

	
	~perro(){ // Destructor de objetos
		// Sirve para liberar memoria al crear objeto, cuando el programa finaliza
		// Crear un desctructor por cada clase creada
	}

	void mostrarDatos();
	void jugar();
};