#pragma once
#include "Lista.h"
template <typename T, template <class> class U>
class NodoArbol {

	template <class T>
	friend class ArbolBinario;

private:
	Lista <T> actual;
	NodoArbol <T, Lista>*padre; 
	NodoArbol <T, Lista>*hijos;

public:
	NodoArbol(Lista<T> elementos){
		this->actual = elementos;
		padre = NULL;
		hijos = NULL;
	}

	~NodoArbol() {
	}

	Lista<T> * NodoArbol::getNodoArbol(){
		return actual;
	}

	Lista<T> * NodoArbol::getNodoArbolHijos(){
		return hijos;
	}

	void NodoArbol::setHijos(Lista<T> * elementos){
		hijos = new NodoArbol(elementos);
	}

};
