// Programa de tributação de impostos em empresas - Empresa.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
// Ambiente de Desenvolvimento: Falcon C++

#include "Empresa.h"

// definindo o construtor da classe
Empresa::Empresa(string nome, long int cgc)
{
	this -> nome = nome;
	this -> cgc = (cgc > 0) ? cgc : 0;
}

// método que retorna o nome da empresa
string Empresa::getNome(void) const
{
	return nome;
}

// método que retorna o CJC da empresa
long int Empresa::getCGC(void) const
{
	return cgc;
}