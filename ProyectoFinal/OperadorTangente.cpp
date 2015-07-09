
#include "stdafx.h"
#include "OperadorTangente.h"

OperadorTagente::OperadorTangente() {
}

OperadorTangente::~OperadorTangente() {
}

void OperadorTangente::imprimir(ostream & out) {
	out << 't' << endl;
}

Elemento * OperadorTangente::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() + der->getValor());*/

	return new Operando(0);
}

Elemento * OperadorTangente::clonar() {
	return new OperadorTangente();
}
