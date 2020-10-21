// Implementação de um programa que simula o registro de empregados - Pessoa.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 17 
// Ambiente de Desenvolvimento: Falcon C++

#include "Pessoa.h"

// Definindo o construtor da classe Pessoa
Pessoa::Pessoa(void)
{
	nome = " ";
	cpf = " ";
}

// Método da classe para configutar o nome do empregado
void Pessoa::setNome(string nome)
{
	this -> nome = nome;
}

// Método da classe para configurar o cpf do empregado
void Pessoa::setCPF(string cpf)
{
	this -> cpf = cpf;
}

// Método da classe para imprimir os dados da classe
// (não recomendado, mas é requisito do problema)
void Pessoa::imprimeNomeCPF(void) const
{
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
}