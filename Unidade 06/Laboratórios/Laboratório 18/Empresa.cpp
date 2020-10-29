// Programa de tributa��o de impostos em empresas - Empresa.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#include "Empresa.h"

// definindo o construtor da classe
Empresa::Empresa(string nome, long int cgc, float faturamento)
{
	this -> nome = nome;
	this -> cgc = (cgc > 0) ? cgc : 0;
	this -> faturamento = (faturamento > 0) ? faturamento : 0;
}

// m�todo que retorna o nome da empresa
string Empresa::getNome(void) const
{
	return nome;
}

// m�todo que retorna o CJC da empresa
long int Empresa::getCGC(void) const
{
	return cgc;
}

// m�todo que retorna o faturamento da empresa
float Empresa::getFaturamento(void) const
{
	return faturamento;
}