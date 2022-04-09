#include <iostream>
#include "tablero.h"

using namespace std;

void tablero::moverArriba(int n){
	y += n;
}

void tablero::moverAbajo(int n){
	y -= n;
}
void tablero::moverDerecha(int n){
	x += n;
}
void tablero::moverIzquierda(int n){
	x -= n;
}
		
int tablero::getX(){
	return x;
}

int tablero::getY(){
	return y;
}