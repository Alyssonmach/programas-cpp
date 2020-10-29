// Implementa��o de um programa que simula o registro de empregados - Empregado.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 17 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef EMPREGAD0_H
#define EMPREGADO_H

#include "Pessoa.h"

// Definindo a classe Empregado que herda da classe Pessoa
class Empregado : public Pessoa
{
	private:
		int numeroSecao;
		float salarioBase;
		float ir;
    public:
    	Empregado(int = 0, float = 0.0, float = 0.0);
    	void setNumeroSecao(int);
    	void setSalarioBase(float);
    	void setIR(float);
    	float calculaSalario(void) const;
    	void getDados(void) const;
};

#endif