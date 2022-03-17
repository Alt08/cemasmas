	#include <iostream>
using namespace std;
/* hacer una estructura llamada alumno, en el cual se tendra los siguientes campos:
		-nombre
		-edad
		-promedio
	-pedir datos al usuario para alumnos
	-comprobar cual de los 3 tiene mejor promedio
	-imprimir todos los datos de los alumnos
*/

struct alumno {
    char nombre[20];
    int edad;
    float promedio;
} datosA[3];

int main() {
    float mayor = 0;
    int pos;
    for (int i = 0; i < 3; i++) {
        fflush(stdin); // Vaciando buffer
        //Guardando datos de los alumnos
        cout << "Introduce tu nombre: ";
        cin.getline(datosA[i].nombre, 20, '\n');
        cout << "Introduce tu edad: ";
        cin >> datosA[i].edad;
        cout << "Introduce tu promedio: ";
        cin >> datosA[i].promedio;
        cout << "\n";

        //Comprobando el mayor promedio
        if(datosA[i].promedio > mayor) {
            mayor = datosA[i].promedio;
            pos = i;
        }
    }

    // Imprime alumno con mejor promedio
    cout << "Tu nombre es: " << datosA[pos].nombre << endl;
    cout << "Tu edad es: " << datosA[pos].edad << endl;
    cout << "El promedio mas alto es: " << datosA[pos].promedio<< endl;

    return 0;
}
