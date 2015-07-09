
#include "stdafx.h"
#include "OperadorSeno.h"

OperadorSeno::OperadorSeno() {
}

OperadorSeno::~OperadorSeno() {
}

void OperadorSeno::imprimir(ostream & out) {
	out << 's' << endl;
}

Elemento * OperadorSuma::operar(Lista<Elemento>& valores) {
	/*Operando * izq = dynamic_cast<Operando *>(a);
	Operando * der = dynamic_cast<Operando *>(b);
	return new Operando(izq->getValor() + der->getValor());*/

	return new Operando(0);
}

Elemento * OperadorSeno::clonar() {
	return new OperadorSeno();
}
