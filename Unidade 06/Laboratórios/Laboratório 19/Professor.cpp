// Implementação de um programa que cadastra usuários em laboratório - Professor.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Professor.h"

// definindo o construtor da classe
Professor::Professor(string nome, string email, int idade, string departamento, int sala) : Usuario(nome, email, idade)
{
	this -> departamento = departamento;
	this -> sala = (sala > 0) ? sala : 0;
}

// método que retorna o departamento
string Professor::getDepartamento(void) const
{
	return departamento;
}

// método que retorna a sala
int Professor::getSala(void) const
{
	return sala;
}