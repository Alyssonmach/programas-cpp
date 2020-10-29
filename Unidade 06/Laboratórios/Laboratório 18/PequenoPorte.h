// Programa de tributação de impostos em empresas - PequenoPorte.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
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
    	// membros de funções da classe
    	void setImpostos(float);
    	float getImpostos(void) const;
    	bool getSIMPLES(void) const;
};

#endif