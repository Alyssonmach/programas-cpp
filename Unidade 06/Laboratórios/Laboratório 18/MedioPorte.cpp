// Programa de tributa��o de impostos em empresas - MedioPorte.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#include "MedioPorte.h"

// definindo o construtor da classe
MedioPorte::MedioPorte(string nome, long int cgc, float faturamento, float impostos) : Empresa(nome, cgc, faturamento)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// m�todo que configura os impostos
void MedioPorte::setImpostos(float impostos)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// m�todo que retorna os impostos
float MedioPorte::getImpostos(void) const
{
	return(impostos * getFaturamento());
}
