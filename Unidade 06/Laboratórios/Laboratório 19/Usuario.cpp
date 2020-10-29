// Implementa��o de um programa que cadastra usu�rios em laborat�rio - Usuario.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Usuario.h"

// definindo o construtor da classe
Usuario::Usuario(string nome, string email, int idade)
{
	this -> nome = nome;
	this -> email = email;
	this -> idade = (idade > 0) ? idade : 0;
}

// m�todo que retorna o nome do usu�rio
string Usuario::getNome(void) const
{
	return nome;
}

// m�todo que retorna o email do usu�rio
string Usuario::getEmail(void) const
{
	return email;
}

// m�todo que retorna a idade do usu�rio
int Usuario::getIdade(void) const
{
	return idade;
}