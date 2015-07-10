#pragma once

#include "Elemento.h"
#include "Operacion.h"
using namespace std;

template <class T>

class Lista {

	template <class T>
	friend ostream& operator<<(ostream&, Lista&);

private:
	Elemento *cabeza, *cola;
	int cantidadElementos;

public:
	Lista(){
		this->cabeza = NULL;
		this->cola = NULL;
	}

	Lista(istream &){
		this->cabeza = NULL;
		this->cola = NULL;
	}
	~Lista(){
		Elemento * actual = cabeza;
		while (actual != NULL) {
			Elemento * tmp = actual;
			actual = actual->getProximo();
			delete tmp;
		}
	}


	void insertar(Elemento *nuevoelemento){
		if (cabeza == NULL) {
			this->cabeza = nuevoElemento;
			this->cola = nuevoElemento;
		}
		else {
			this->cola->setProximo(nuevoElemento);
			this->cola = nuevoElemento;
		}
		cantidadElementos++;
	}
	int getCantidadElementos(){
		return cantidadElementos;
	}

	Elemento * getCopy(int){
		Elemento * actual = cabeza;
		while (actual != NULL && i != 0) {
			actual = actual->getProximo();
			i--;
		}
		return actual->clonar();
	}


	ostream& operator<<(ostream & out, Lista & lista) {
		Elemento * actual = lista.cabeza;
		int c = 0;
		while (actual != NULL) {
			out << ++c << ". " << *actual << endl;
			actual = actual->getProximo();
		}
		return out << endl;
	}
};
