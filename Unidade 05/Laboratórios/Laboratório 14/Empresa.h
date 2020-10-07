// Implementando um programa que simula uma empresa - Empresa.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 14 

#ifndef EMRPESA_H
#define EMPRESA_H

// Definindo uma classe Empresa
class Empresa  
{
	// Modificador de acesso private
	private:
		// Membros de dados da classe
		string nome;
		long int CNPJ;
		int maxEmpresa;
		Funcionario *ptr;
		int total;
    // Modificador de acesso public
    public:
    	// Construtor da classe
    	Empresa(int);
    	// Membros de funções da classe
    	void setNome(string);
    	void setEmpresa(Funcionario);
    	void setCNPJ(long int);
    	void aumentoDepartamento(string);
    	string getNome(void) const;
    	long int getCNPJ(void) const;
    	void imprimeEmpresa(void) const;
    	// Destrutor da classe
    	~Empresa(void);
};

#endif