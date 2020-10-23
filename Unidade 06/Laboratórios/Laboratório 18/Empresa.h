// Programa de tributação de impostos em empresas - Empresa.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
// Ambiente de Desenvolvimento: Falcon C++

#ifndef EMPRESA_H
#define EMPRESA_H

// definindo a classe empresa
class Empresa 
{
	// especificador de acesso private
	private:
		// membros de dados da classe
		string nome;
		long int cgc;
    // especificador de acesso public
    public:
    	// construtor da classe
    	Empresa(string = " ", long int = 0);
    	// membros de funções da classe
    	string getNome(void) const;
    	long int getCGC(void) const;
};

#endif