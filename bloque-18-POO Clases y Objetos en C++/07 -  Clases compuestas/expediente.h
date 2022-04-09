#include <iostream>
using namespace std;

class expediente{
	private:
	int nroExpediente;
	
	public:
		// Creacion de un constructor
		expediente(int nroExpediente){
			this->nroExpediente = nroExpediente;
		}

		// Declaracion del constructor por defecto, para evitar problemas
		expediente(){
		}
		
		~expediente(){
		}
		
		int getNroExpediente(){
			return nroExpediente;
		}
};