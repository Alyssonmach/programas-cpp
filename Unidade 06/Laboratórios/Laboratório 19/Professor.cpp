// Implementa��o de um programa que cadastra usu�rios em laborat�rio - Professor.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 19 
// Ambiente de Desenvolvimento: Falcon C++

#include "Professor.h"

// definindo o construtor da classe
Professor::Professor(string nome, string email, int idade, string departamento, int sala) : Usuario(nome, email, idade)
{
	this -> departamento = departamento;
	this -> sala = (sala > 0) ? sala : 0;
}

// m�todo que retorna o departamento
string Professor::getDepartamento(void) const
{
	return departamento;
}

// m�todo que retorna a sala
int Professor::getSala(void) const
{
	return sala;
}