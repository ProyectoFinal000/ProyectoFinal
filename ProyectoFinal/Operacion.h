
#pragma once
#include "stdafx.h"

#include "Elemento.h"
#include "Operando.h"
#include "Operador.h"
#include "OperadorSuma.h"
#include "OperadorResta.h"
#include "OperadorDivision.h"
#include "OperadorMultiplicacion.h"
#include "NodoArbol.h"
#include "Lista.h"
#include "OperadorElevacion"
#include "OperadorSeno.h"
#include "OperadorCoseno.h"
#include "OperadorTangente.h"
#include "OperadorLogaritmo.h"
#include "OperadorFuncion.h"


using namespace std;

class Operacion : public Elemento {
private:

	static const int NUM_OPERADORES = 4;
	static const char OPERADORES[NUM_OPERADORES];
	static const char LEFT_PARENTHESIS = '(';
	static const char RIGHT_PARENTHESIS = ')';

	string operacion;

	Lista<int> * hijosArbol;
	
	virtual void imprimir(ostream&);
	void eliminarEspaciosEnBlanco();
	void eliminarParentesisInnecesarios(string &);
	int indiceMenorPrecedencia(string);
	Elemento * procesarStringHijo(string);

public:
	Operacion(string);
	
	virtual ~Operacion();

	template< class T > ;
	NodoArbol <T, Lista> * descomponer();
	
	string getValor();

	virtual Elemento * clonar();
};

