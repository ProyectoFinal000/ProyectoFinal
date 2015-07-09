
#pragma once

#include "stdafx.h"

#include "Elemento.h"
#include "Lista.h"

using namespace std;

class Operador : public Elemento {

protected:
	virtual void imprimir(ostream&) = 0;

public:
	virtual ~Operador() {
	};
	
	virtual Elemento * operar(Lista<Elemento>&) = 0;

	virtual Elemento * clonar() = 0;
};