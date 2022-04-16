// 5 - Clases abstractas y funciones virtuales
// Solamente se usan como clase base, clase padre o super clase 
// No permite  instanciar objetos
// Sirven para proporcionar una clase base apropiada a partir de la cual heredan otras clases

/*
    EJEMPLO:
                    clase base
                alimentarse(): void -> Metodo virtual (solamente definido pero no implementado en clases derivadas) == a una clase abstractas
                        ^
                        |
                   ____________________________________________
                animal                                      planta
            +alimentarse(): void                          +alimentarse()
                  ^                         
                  |                         
          _______________________________
          ^                             ^
          |                             |
    animalCarnivoro                animalHervivoro
    +alimentarse(): void      +alimentarse(): void

    animel es una clase abstracta
*/

#include <iostream>
#include "planta.h"
#include "animalCarnivoro.h"
#include "animalHerbivoro.h"
using namespace std;

int main(int argc, char** argv){
    planta* planta1 = new planta();
    planta1->alimentarse();

    animalCarnivoro* ac = new animalCarnivoro();
    ac->alimentarse();
    
    animalHerbivoro* ah = new animalHerbivoro();
    ah->alimentarse();
}