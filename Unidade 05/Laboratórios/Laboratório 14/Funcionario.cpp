// Implementando um programa que simula uma empresa - Funcionario.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 14 

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

// Método para configurar o nome do funcionário
void Funcionario::setNome(string nome)
{
	this -> nome = nome;
}

// Método para configurar o salário do funcionário
void Funcionario::setSalario(float salario)
{
	this -> salario = salario;
}

// Método para configurar a data de admissão do funcionário
void Funcionario::setData(int dia, int mes, int ano)
{
	this -> data.dia = dia;
	this -> data.mes = mes;
	this -> data.ano = ano;
}

// Método para configurar o departamento do funcionário
void Funcionario::setDepartamento(string departamento)
{
	this -> departamento = departamento;
}

// Método para obter o nome do funcionário
string Funcionario::getNome(void) const
{
	return nome;
}

// Método para obter o salário do funcionário
float Funcionario::getSalario(void) const
{
	return salario;
}

// Método para obter a data de admissão do funcionário
DataAdmissao Funcionario::getData(void) const
{
	return data;
}

// Método para obter o departamento do funcionário
string Funcionario::getDepartamento(void) const
{
	return departamento;
}