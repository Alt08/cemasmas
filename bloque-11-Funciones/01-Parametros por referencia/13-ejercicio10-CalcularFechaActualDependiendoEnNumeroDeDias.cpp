/*
    -Escriba un funcion nombreada calcAnios()
    -Que contenga un paramentro entero representando el numero total de dias desde 1/1/2000
    -Y parametros de referencia nombrados AÑO, MES y DIA
    
    ->La funcion es calcular el año, mes y dia actual para el numero dado de dia que se le transmita,

    >>Para este problema suponga que cada año tiene 365 dis y cada mes 30 dias
*/

#include <iostream>
using namespace std;

void calcAnios(int, int&, int&, int&);

int main(){
    int diasTotal, anio, mes, dia;

    cout<<"Introduce una cantidad de dias: ";    
    cin>>diasTotal;

    calcAnios(diasTotal, anio, mes, dia);
    cout<<"Fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;
    return 0;
}

void calcAnios(int diasTotal, int& anio, int& mes, int& dia){
    anio = diasTotal/365;//Dividimos la cantidad en dias introducidas por los 365 dias que tiene un año
    diasTotal %= 365; //Descontamos la cantidad de dias ya usados para el año (Seria como resetear los dias a su valor introducido)
    mes = diasTotal/30;
    dia =  diasTotal%30;
}