#pragma once

template<class T>
class NodoLista {

	template <class T>
	friend class Lista;

private:
	T actual;
	NodoLista<T> *siguiente, *anterior;

public:
	NodoLista(T elemento) {
		this->actual = elemento;
		siguiente = NULL;
		anterior = NULL;
	}

	~NodoLista() {
	}

	T * NodoLista::getNodoLista(){
		return actual;
	}
};