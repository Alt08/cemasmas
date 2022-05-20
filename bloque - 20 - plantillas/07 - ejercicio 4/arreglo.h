#include <iostream>
using namespace std;

template <class T>
class arreglo{
    private:
        T* Arreglo;
        int indice;
        int nElementos;
    
    public:
        arreglo(int n){
            Arreglo = new T[n];
            indice = 0;
            nElementos = n;
        }

        ~arreglo(){ 
            delete[] Arreglo;
        }

        void agregar(T elemento){
            Arreglo[indice++] = elemento;
        }

        bool arregloLleno(){
            if(indice >= nElementos){
                return true;
            }else{
                return false;
            }
        }

        void mostrarArreglo(){
            for(int i=0; i<indice; i++){
                cout << "Elemento[" << i << "]: " << Arreglo[i] << endl;
            }
        }

        void vaciarArreglo(){
            for(int i=0; i<indice; i++){
                Arreglo[i] = NULL;
            }
            indice = 0;
        }
};