// Implementa��o de um programa que cadastra usu�rios em laborat�rio - Aluno.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Aluno.h"

// definindo o construtor da classe
Aluno::Aluno(string nome, string email, int idade, string matricula, string curso) : Usuario(nome, email, idade)
{
	this -> matricula = matricula;
	this -> curso = curso;
}

// m�todo que retorna a matr�cula do usu�rio
string Aluno::getMatricula(void) const
{
	return matricula;
}

// m�todo que retorna o curso do usu�rio
string Aluno::getCurso(void) const
{
	return curso;
}