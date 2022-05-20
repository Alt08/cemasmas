#include <iostream>
#include <stdlib.h> // exit(1)
#include <fstream> // Para el manejo de archivos
using namespace std;

void escribir();

int main(){
    escribir();


    return 0;
}


void escribir(){
    ofstream archivo; // Declaracion de una variable para archivos
    string nombreArchivo, frase;
    
    cout << "Digite el nonbre del archivo: ";
    getline(cin, nombreArchivo);
	
	
	    
    // El archivo se crea en la ubicacion del archivo cpp
    // archivo.open("prueba.txt", ios::out); // Abriendo archivo y asignando nombre, si el archivo existe lo reemplaza de lo contrario se crea
	
	/*	Asignando ubicacion en especifico */
    //archivo.open("C:/Users/Dell/Pictures/prueba.txt", ios::out); // Abriendo archivo y asignando nombre, si el archivo existe lo reemplaza de lo contrario se crea
    
	// Asignar nombre al archivo por el usuario
	archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo archivo y asignando nombre, si el archivo existe lo reemplaza de lo contrario se crea
    if (archivo.fail()){ // Comprando si el archivo de se crea
        cout << "No se pudo abrir el archivo.";
        exit(1); // Funcion de la libreri stdlib para salir del programa
    }
    
    // Pidiendo texto al usuario
    cout << "Digite el contenido del archivo: ";
    getline(cin, frase);
    archivo << frase;
    
//    archivo << "Hola que tal? soy no se quien soy"; // Texto que se guardara en el archivo

    archivo.close(); // Funcion para cerrar el archivo

    
}