#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente() {
	id = 0;
	nif = 0;
}
/*
Cliente::Cliente(int n, int i) {
	id = i;
	nif = n;
}*/

Cliente::Cliente(int n, int i) : id(i), nif(n) {}

Cliente::Cliente(const Cliente& outro){
	id = outro.id;
	nif = outro.nif; }

void Cliente::printDados(){
	cout << "ID: " << id << " NIF: " << nif << endl;
}

void Cliente::setNif(int n){
	nif = n;
}

int Cliente::getNif(){
	return nif;}
