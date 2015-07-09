
#pragma once

#include "Operador.h"
#include "Operando.h"

class OperadorResta :
	public Operador {

protected:
	virtual void imprimir(ostream&);

public:
	OperadorResta();
	~OperadorResta();

	virtual Elemento * operar(Lista<Elemento>&);

	virtual Elemento * clonar();
};

