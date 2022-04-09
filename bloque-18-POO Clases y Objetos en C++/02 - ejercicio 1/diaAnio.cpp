// Aqui declaramos las acciones de lo que se declaro en el archivo .h

#include <iostream>
#include "diaAnio.h"

using namespace std;

// Comprobamos la igualdad en las fechar
bool DiaAnio::igual(DiaAnio& d){
    if (dia == d.dia && mes == d.mes){
        return true;
    }else{
        return false;
    }
    
}

void DiaAnio::visualizar(){
    cout << " \nMostrando los datos " << endl;
    cout << " Mes: " << mes << "\n Dia: " << dia << endl;
}