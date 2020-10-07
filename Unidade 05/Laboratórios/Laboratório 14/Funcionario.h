// Implementando um programa que simula uma empresa - Funcionario.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 14 

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
    	// Membros de funções da classe
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