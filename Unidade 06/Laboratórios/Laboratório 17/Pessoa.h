// Implementação de um programa que simula o registro de empregados - Pessoa.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 17 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef PESSOA_H
#define PESSOA_H

// Definindo a classe Pessoa
class Pessoa 
{
	private:
		string nome;
		string cpf;
	public:
		Pessoa(void);
		void setNome(string);
		void setCPF(string);
		void imprimeNomeCPF(void) const;
};

#endif