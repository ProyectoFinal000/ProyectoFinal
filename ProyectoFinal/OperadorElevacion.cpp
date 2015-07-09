#include "stdafx.h"
#include "OperadorElevacion.h"

OperadorElevacion::OperadorElevacion() {
}

OperadorElevacion::~OperadorElevacion() {
}

void OperadorElevacion::imprimir(ostream & out) {
	out << '^' << endl;
}

Elemento * OperadorElevacion::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() + der->getValor());*/

	return new Operando(0);
}

Elemento * OperadorElevacion::clonar() {
	return new OperadorElevacion();
}