
#include "stdafx.h"
#include "OperadorDivision.h"

OperadorDivision::OperadorDivision() {
}

OperadorDivision::~OperadorDivision() {
}

void OperadorDivision::imprimir(ostream & out) {
	out << '/' << endl;
}

Elemento * OperadorDivision::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() / der->getValor());*/

	return new Operando(0);
}


Elemento * OperadorDivision::clonar() {
	return new OperadorDivision();
}