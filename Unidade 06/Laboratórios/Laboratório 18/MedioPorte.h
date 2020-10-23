// Programa de tributação de impostos em empresas - MedioPorte.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
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
    	MedioPorte(string = " ", long int = 0, float = 0.0);
    	// membros de funções da classe
    	void setImpostos(float);
    	float getImpostos(void) const;
};

#endif