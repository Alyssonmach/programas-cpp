// Programa de tributa��o de impostos em empresas - PequenoPorte.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#ifndef PEQUENOPORTE_H
#define PEQUENOPORTE_H

#include "Empresa.h"

// definindo a classe PequenoPorte que herda de Empresa
class PequenoPorte : public Empresa
{
	// especificador de acesso private
	private:
		// membros de dados da classe
		float impostos;
		bool simples;
    // especificador de acesso public
    public:
    	// construtor da classe
    	PequenoPorte(string = " ", long int = 0, float = 0.0, float = 0.0, bool = false);
    	// membros de fun��es da classe
    	void setImpostos(float);
    	float getImpostos(void) const;
    	bool getSIMPLES(void) const;
};

#endif