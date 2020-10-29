// Implementa��o de um programa que cadastra usu�rios em laborat�rio - Aluno.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

// definindo a classe Aluno que herda de usu�rio
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
    	// membros de fun��es da classe
    	string getMatricula(void) const;
    	string getCurso(void) const;
};

#endif