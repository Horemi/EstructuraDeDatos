#pragma once
#include "Nodo.h"
#define MAX 100
//declarar laestructura de una cola enteros
class Colae
{ private: 
	Nodo info[MAX]; 
	int ini, fin;
 public: 
	Colae (void); 
	bool Encolar (Nodo Valor); //int valor,string valor
	bool Desencolar (void); 
	bool PrimeroCola (Nodo &Valor); 
	bool ColaVacia (void);
	void mostrar (void);
};


