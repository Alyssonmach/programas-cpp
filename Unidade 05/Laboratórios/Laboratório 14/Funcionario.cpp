// Implementando um programa que simula uma empresa - Funcionario.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 14 

#include "Funcionario.h"

// Implementando o construtor da classe Funcionario
Funcionario::Funcionario(void)
{
	this -> data.dia = 0;
	this -> data.mes = 0;
	this -> data.ano = 0;
	this -> nome = "";
 	this -> salario = 0.0;
 	this -> departamento = "";
}

// M�todo para configurar o nome do funcion�rio
void Funcionario::setNome(string nome)
{
	this -> nome = nome;
}

// M�todo para configurar o sal�rio do funcion�rio
void Funcionario::setSalario(float salario)
{
	this -> salario = salario;
}

// M�todo para configurar a data de admiss�o do funcion�rio
void Funcionario::setData(int dia, int mes, int ano)
{
	this -> data.dia = dia;
	this -> data.mes = mes;
	this -> data.ano = ano;
}

// M�todo para configurar o departamento do funcion�rio
void Funcionario::setDepartamento(string departamento)
{
	this -> departamento = departamento;
}

// M�todo para obter o nome do funcion�rio
string Funcionario::getNome(void) const
{
	return nome;
}

// M�todo para obter o sal�rio do funcion�rio
float Funcionario::getSalario(void) const
{
	return salario;
}

// M�todo para obter a data de admiss�o do funcion�rio
DataAdmissao Funcionario::getData(void) const
{
	return data;
}

// M�todo para obter o departamento do funcion�rio
string Funcionario::getDepartamento(void) const
{
	return departamento;
}