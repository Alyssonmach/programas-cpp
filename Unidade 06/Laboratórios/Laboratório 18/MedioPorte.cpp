// Programa de tributação de impostos em empresas - MedioPorte.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
// Ambiente de Desenvolvimento: Falcon C++

#include "MedioPorte.h"

// definindo o construtor da classe
MedioPorte::MedioPorte(string nome, long int cgc, float impostos) : Empresa(nome, cgc)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// método que configura os impostos
void MedioPorte::setImpostos(float impostos)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// método que retorna os impostos
float MedioPorte::getImpostos(void) const
{
	return impostos;
}
