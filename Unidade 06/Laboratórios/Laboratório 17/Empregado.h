// Implementação de um programa que simula o registro de empregados - Empregado.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 17 
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