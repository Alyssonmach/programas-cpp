// Programa de tributa��o de impostos em empresas - MedioPorte.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#ifndef MEDIOPORTE_H
#define MEDIOPORTE_H

#include "Empresa.h"

// definindo a classe MedioPorte que herda de Empresa
class MedioPorte : public Empresa
{
	// especificador de acesso private
	private:
		// membro de dado da classe
		float impostos;
    // especificador de acesso public
    public:
    	// construtor da classe
    	MedioPorte(string = " ", long int = 0, float = 0.0, float = 0.0);
 	   // membros de fun��es da classe
    	void setImpostos(float);
    	float getImpostos(void) const;
};

#endif