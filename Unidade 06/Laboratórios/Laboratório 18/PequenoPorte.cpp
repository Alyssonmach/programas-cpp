// Programa de tributação de impostos em empresas - PequenoPorte.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
// Ambiente de Desenvolvimento: Falcon C++

#include "PequenoPorte.h"

// definindo o construtor da classe
PequenoPorte::PequenoPorte(string nome, long int cgc, float faturamento, float impostos, bool simples) : Empresa(nome, cgc, faturamento)
{
	this -> impostos = impostos;
	this -> simples = simples;
}

// método que configura os impostos brutos
void PequenoPorte::setImpostos(float impostos)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// método que retorna os impostos tributados
float PequenoPorte::getImpostos(void) const
{
	if(simples == true)
		return ((impostos * getFaturamento()) - (0.7 * (impostos * getFaturamento())));
	else 
		return ((impostos * getFaturamento()) - (0.5 * (impostos * getFaturamento())));
}

// método que retorna a situação de cadastro da pequena empresa no SIMPLES
bool PequenoPorte::getSIMPLES(void) const
{
	return simples;
}