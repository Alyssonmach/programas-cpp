// Implementação de um programa que cadastra usuários em laboratório - Professor.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"

// definindo a classe Professor que herda de Usuario
class Professor : public Usuario
{
	// especificador de acesso private
	private:
		// membros de dados da classe
		string departamento;
		int sala;
    // especificador de acesso public
    public:
    	// construtor da classe
    	Professor(string = " ", string = " ", int = 0, string = " ", int = 0);
    	// membros de funções da classe
    	string getDepartamento(void) const;
    	int getSala(void) const;
};

#endif