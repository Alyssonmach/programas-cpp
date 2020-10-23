// Implementação de um programa que cadastra usuários em laboratório - Aluno.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Aluno.h"

// definindo o construtor da classe
Aluno::Aluno(string nome, string email, int idade, string matricula, string curso) : Usuario(nome, email, idade)
{
	this -> matricula = matricula;
	this -> curso = curso;
}

// método que retorna a matrícula do usuário
string Aluno::getMatricula(void) const
{
	return matricula;
}

// método que retorna o curso do usuário
string Aluno::getCurso(void) const
{
	return curso;
}