
#include "stdafx.h"
#include "OperadorLogaritmo.h"

OperadorLogaritmo::OperadorLogaritmo() {
}

OperadorLogaritmo::~OperadorLogaritmo() {
}

void OperadorLogaritmo::imprimir(ostream & out) {
	out << 'l' << endl;
}

Elemento * OperadorLogaritmo::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() + der->getValor());*/

	return new Operando(0);
}

Elemento * OperadorLogaritmo::clonar() {
	return new OperadorLogaritmo();
}
