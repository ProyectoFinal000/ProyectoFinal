
#include "stdafx.h"
#include "OperadorCoseno.h"

OperadorCoseno::OperadorCoseno() {
}

OperadorCoseno::~OperadorCoseno() {
}

void OperadorCoseno::imprimir(ostream & out) {
	out << 'c' << endl;
}

Elemento * OperadorCoseno::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() + der->getValor());*/

	return new Operando(0);
}

Elemento * OperadorCoseno::clonar() {
	return new OperadorCoseno();
}
