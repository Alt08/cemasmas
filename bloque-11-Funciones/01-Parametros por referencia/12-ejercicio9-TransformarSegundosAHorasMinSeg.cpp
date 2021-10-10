/*
    -Escriba una funcio nnombrada tiempo()
    -Que tenga un parametro en numero entero llamado totalSeg 
    -Y tres parametros e referencia enteros nomdosas horas, min, seg
    -La funcion es convertir el numero de segundos transmitidos en un numero
    -Equivalente de horas, minutos y segundos
*/

#include <iostream>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
    int TotalSeg, horas, minuto, segundo;

    cout<<"Introduce un tuempo en segundos: ";
    cin>>TotalSeg;

    tiempo(TotalSeg, horas, minuto, segundo);
    cout<<"Tiempo en segundos: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minuto: "<<minuto<<endl;
    cout<<"Segundo: "<<segundo<<endl;
    return 0;
}

void tiempo(int TotalSeg, int& horas, int& minuto, int& segundo){
   horas = TotalSeg/3600;
   TotalSeg %= 3600;
   
   minuto = TotalSeg/60;
   segundo = TotalSeg%60;
}