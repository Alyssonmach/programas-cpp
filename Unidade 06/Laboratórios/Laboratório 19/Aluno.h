// Implementação de um programa que cadastra usuários em laboratório - Aluno.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

// definindo a classe Aluno que herda de usuário
class Aluno : public Usuario
{
	// especificador de acesso private
	private:
		// membros de dados da classe
		string matricula;
		string curso;
    // especificador de acesso public
    public:
    	// construtor da classe
    	Aluno(string = " ", string = " ", int = 0, string = " ", string = " ");
    	// membros de funções da classe
    	string getMatricula(void) const;
    	string getCurso(void) const;
};

#endif