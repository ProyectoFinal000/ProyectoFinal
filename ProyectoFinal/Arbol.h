#pragma once

#include "Elemento.h"
#include "Operador.h"
#include "Operacion.h"

template <class T>
class Arbol {

	template <class T>

private:

	Arbol(Elemento*){
		Elemento * raiz;
	}
	void destruirRec(Elemento *){
		if (actual->getHijoIzquierdo() != NULL) {
			destruirRec(actual->getHijoIzquierdo());
		}
		if (actual->getHijoDerecho() != NULL) {
			destruirRec(actual->getHijoDerecho());
		}
		delete actual;
	}

	void solucionarRec(Elemento *&){
		Elemento * izq = actual->getHijoIzquierdo();
		Elemento * der = actual->getHijoDerecho();
		Operador * op = dynamic_cast<Operador*>(actual);
		if (op != NULL) {
			if (izq != NULL) {
				solucionarRec(actual->getHijoIzquierdo());
			}
			if (der != NULL) {
				solucionarRec(actual->getHijoDerecho());
			}
			Elemento * solucion = op->operar(actual->getHijoIzquierdo(), actual->getHijoDerecho());
			delete actual;
			actual = solucion;
		}
	}

	void descomponerRec(Elemento *&){
		Operacion * operacion = dynamic_cast<Operacion *>(actual);
		if (operacion != NULL) {

			Elemento * tmp = actual;
			actual = operacion->descomponer();
			delete tmp;

			Elemento * izq = actual->getHijoIzquierdo();
			Elemento * der = actual->getHijoDerecho();
			if (izq != NULL) {
				descomponerRec(actual->getHijoIzquierdo());
			}
			if (der != NULL) {
				descomponerRec(actual->getHijoDerecho());
			}
		}
	}

public:

	~Arbol(){

	}

	void descomponer(){
		descomponerRec(raiz);
	}
	Elemento * solucionar(){
		solucionarRec(raiz);
	}
};