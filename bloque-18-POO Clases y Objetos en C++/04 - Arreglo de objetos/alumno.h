// Arreglo de objetos

class alumno{
	// Atributos
	private:
		float calmate, calPro, promedio;
	
	//	Metodos
	public:
		// Constructor
		alumno(float _calmate, float _calPro){
			calmate = _calmate;
			calPro = _calPro;
			// promedio = _promedio;
		}
		
		// Si creamos un constructor con parametros, obligatoriamente se agrega el constructor por defecto
		// Al crear el arreglo de objetos, se utiliza el constructor por defecto
		//	No es necesario declararlo, ya que es un constructor por defecto
		alumno(){ // Contructor por defecto, inicia todos los atributos con ceros binarios
		}
		void pedirDatos();
		void mostrarDatos();
	
};