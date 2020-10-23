// Implementação de um programa que cadastra usuários em laboratório - Usuario.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Usuario.h"

// definindo o construtor da classe
Usuario::Usuario(string nome, string email, int idade)
{
	this -> nome = nome;
	this -> email = email;
	this -> idade = (idade > 0) ? idade : 0;
}

// método que retorna o nome do usuário
string Usuario::getNome(void) const
{
	return nome;
}

// método que retorna o email do usuário
string Usuario::getEmail(void) const
{
	return email;
}

// método que retorna a idade do usuário
int Usuario::getIdade(void) const
{
	return idade;
}