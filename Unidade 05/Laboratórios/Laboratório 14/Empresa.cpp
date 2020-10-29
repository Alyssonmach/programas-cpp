// Implementando um programa que simula uma empresa - Empresa.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 14 

#include "Empresa.h"

// Implementanto o construtor da classe Empresa
Empresa::Empresa(int tam)
{
	maxEmpresa = (tam > 0) ? tam : 0;
	ptr = new Funcionario[maxEmpresa];
	total = 0; 
}

// M�todo para configurar o nome da empresa
void Empresa::setNome(string nome)
{
	this -> nome = nome;
}

// M�todo para cadastrar um novo funion�rio a empresa
void Empresa::setEmpresa(Funcionario f)
{
	if (total < maxEmpresa)
	{
		ptr[total] = f;
		total++;
	}
}

// M�todo para cadastrar o CNPJ da empresa
void Empresa::setCNPJ(long int cnpj)
{
	this -> CNPJ = cnpj;
}

// M�todo para realizar um aumento de 10% aos funcion�rios de um determinado dep.
void Empresa::aumentoDepartamento(string dp)
{
	for(int i = 0; i < total; i++)
	{
		if(ptr[i].getDepartamento() == dp)
		{
			ptr[i].setSalario(ptr[i].getSalario() * 0.1 + ptr[i].getSalario());
		}
	}
}

// M�todo para obter o nome da empresa
string Empresa::getNome(void) const
{
	return nome;
}

// M�todo para obter o CNPJ da empresa
long int Empresa::getCNPJ(void) const
{
	return CNPJ;
}

// M�todo para imprimir os dados cadastrados na empresa
void Empresa::imprimeEmpresa(void) const
{
	cout << "Nome da Empresa: " << nome << endl;
	cout << "CNPJ: " << CNPJ << endl << endl;
	
	for(int i =0; i < total; i++)
	{
		cout << "Funcionario " << i + 1 << ": " << ptr[i].getNome() << endl;
		cout << "Departamento: " << ptr[i].getDepartamento() << endl;
		
		DataAdmissao aux = ptr[i].getData();
		
		cout << setfill('0');
		cout << "Data de Admiss�o: " << setw(2) <<aux.dia << "/";
		cout << setw(2) << aux.mes << "/";
		cout << setw(4) << aux.ano << endl;
		
		cout << "Salario: " << ptr[i].getSalario() << " R$" << endl << endl;
	}
}

// Implementando o destrutor da classe empressa
Empresa::~Empresa()
{
	delete []ptr;
	cout << "Cache de Registros limpo..." << endl;
}