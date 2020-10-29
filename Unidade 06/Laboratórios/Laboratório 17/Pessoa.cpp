// Implementa��o de um programa que simula o registro de empregados - Pessoa.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 17 
// Ambiente de Desenvolvimento: Falcon C++

#include "Pessoa.h"

// Definindo o construtor da classe Pessoa
Pessoa::Pessoa(void)
{
	nome = " ";
	cpf = " ";
}

// M�todo da classe para configutar o nome do empregado
void Pessoa::setNome(string nome)
{
	this -> nome = nome;
}

// M�todo da classe para configurar o cpf do empregado
void Pessoa::setCPF(string cpf)
{
	this -> cpf = cpf;
}

// M�todo da classe para imprimir os dados da classe
// (n�o recomendado, mas � requisito do problema)
void Pessoa::imprimeNomeCPF(void) const
{
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
}