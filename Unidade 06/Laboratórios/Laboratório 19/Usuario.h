// Implementa��o de um programa que cadastra usu�rios em laborat�rio - Usuario.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef USUARIO_H
#define USUARIO_H

// definindo uma classe base usu�rio
class Usuario 
{
	// especificador de acesso protected
	private:
		// membro de dados da classe
		string nome;
		string email;
		int idade;
    // especificador de acesso public
	public:
		// construtor da classe
		Usuario(string = " ", string = " ", int = 0);
		// membro de fun��es da classe
		string getNome(void) const;
		string getEmail(void) const;
		int getIdade(void) const;
};

#endif