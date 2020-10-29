// Implementando um programa que simula uma empresa - Funcionario.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 14 

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

// Definindo uma struct DataAdmissao
struct DataAdmissao
{
	int dia;
	int mes;
	int ano;
};

// Definindo uma classe Funcionario
class Funcionario 
{	
	// Modificador de acesso private
	private:
		// Membros de dados da classe
		string nome;
		float salario;
		DataAdmissao data;
		string departamento;
    // Modificador de acesso public
    public:
    	// Construtor da classe
    	Funcionario(void);
    	// Membros de fun��es da classe
    	void setNome(string);
    	void setSalario(float);
    	void setData(int, int, int);
    	void setDepartamento(string);
    	string getNome(void) const;
    	float getSalario(void) const;
    	DataAdmissao getData(void) const;
    	string getDepartamento(void) const;
};

#endif