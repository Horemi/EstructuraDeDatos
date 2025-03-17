#include "stdafx.h"
#include "Nodo.h"
Nodo::Nodo() {
	numero = 0;
	cliente = "";
}
Nodo::Nodo(int _numero, string _cliente) {
	numero = _numero;
	cliente = _cliente;
}