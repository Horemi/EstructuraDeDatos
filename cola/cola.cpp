// cola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <string>
#include "Colae.h"
#include "Nodo.h"

#define MAX 100 //constante de copilador MAX

using namespace std;

void main()
{
	Colae cola; //se instancia el objeto o crea objeto cola
	Nodo Valor;
	for (int j = 1; j < 10; j++) {
		Valor.numero = j;
		cout << "ingresael nombre del cliente: ";
		getline(cin, Valor.cliente);
		if (!cola.Encolar(Valor)) //se usa el ! porque se usa logica negativa
			cola.mostrar();
		else
			cout << "Error";
	}
	
	cout<<endl<<"Desencolar"<<endl;
	if (!cola.Desencolar())
		cola.mostrar();
	else
		cout<<"Error";
	if (!cola.PrimeroCola(Valor))
		cout<<"Valor: "<<Valor.cliente;
	getch();
}