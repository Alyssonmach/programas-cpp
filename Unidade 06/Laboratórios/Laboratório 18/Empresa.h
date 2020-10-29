// Programa de tributa��o de impostos em empresas - Empresa.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
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
		float faturamento;
    // especificador de acesso public
    public:
    	// construtor da classe
    	Empresa(string = " ", long int = 0, float = 0.0);
    	// membros de fun��es da classe
    	string getNome(void) const;
    	long int getCGC(void) const;
    	float getFaturamento(void) const;
};

#endif