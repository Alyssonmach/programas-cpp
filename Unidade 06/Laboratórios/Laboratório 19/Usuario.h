// Implementação de um programa que cadastra usuários em laboratório - Usuario.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef USUARIO_H
#define USUARIO_H

// definindo uma classe base usuário
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
		// membro de funções da classe
		string getNome(void) const;
		string getEmail(void) const;
		int getIdade(void) const;
};

#endif