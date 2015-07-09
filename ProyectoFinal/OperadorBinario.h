#pragma once

#include "stdafx.h"
#include "operador.h"
#include "Operando.h"

class OperadorBinario :public Operador {

protected:
	virtual void imprimir(ostream&) = 0;

public:

	virtual ~OperadorBinario() {

	};
	
	virtual Elemento * operar(Lista<Elemento>&) = 0;

	virtual Elemento * clonar() = 0;
};