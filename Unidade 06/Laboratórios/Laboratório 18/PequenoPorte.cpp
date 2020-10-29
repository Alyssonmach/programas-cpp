// Programa de tributa��o de impostos em empresas - PequenoPorte.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#include "PequenoPorte.h"

// definindo o construtor da classe
PequenoPorte::PequenoPorte(string nome, long int cgc, float faturamento, float impostos, bool simples) : Empresa(nome, cgc, faturamento)
{
	this -> impostos = impostos;
	this -> simples = simples;
}

// m�todo que configura os impostos brutos
void PequenoPorte::setImpostos(float impostos)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// m�todo que retorna os impostos tributados
float PequenoPorte::getImpostos(void) const
{
	if(simples == true)
		return ((impostos * getFaturamento()) - (0.7 * (impostos * getFaturamento())));
	else 
		return ((impostos * getFaturamento()) - (0.5 * (impostos * getFaturamento())));
}

// m�todo que retorna a situa��o de cadastro da pequena empresa no SIMPLES
bool PequenoPorte::getSIMPLES(void) const
{
	return simples;
}