#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float temperatura, mayor=0, menor=999, promedio;
    for (int i=0; i<24; i+=4){
        cout<<"Temperatura del dia (HORA ACTUAL) "<<i<<" "; cin>>temperatura;
        promedio=promedio+temperatura/6;
        if (temperatura>mayor){
            mayor=temperatura;
        }
        if (temperatura<menor){
            menor=temperatura;
        }
    }
    cout<<"la temperatura alta es: "<<mayor<<endl;
    cout<<"la temperatura baja es: "<<menor<<endl;
    cout<<"la temperatura promedio es: "<<promedio;
    
    getch();
    return 0;
}