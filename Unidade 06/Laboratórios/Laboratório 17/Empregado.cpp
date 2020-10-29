// Implementa��o de um programa que simula o registro de empregados - Empregado.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 17 
// Ambiente de Desenvolvimento: Falcon C++

#include "Empregado.h"

// Definindo o construtor da classe Empregado
Empregado::Empregado(int numeroSecao, float salarioBase, float ir)
{
	this -> numeroSecao = numeroSecao;
	this -> salarioBase = salarioBase;
	this -> ir = ir;
}

// M�todo da classe para cadastrar o n�mero da se��o do trabalhador
void Empregado::setNumeroSecao(int numeroSecao)
{
	this -> numeroSecao = (numeroSecao > 0) ? numeroSecao:0;
}

// M�todo da classe para cadastrar o sal�rio bruto do trabalhador
void Empregado::setSalarioBase(float salarioBase)
{
	this -> salarioBase = (salarioBase > 0) ? salarioBase:0;
}

// M�todo da classe para cadastrar a taxa de imposto de renda 
// sobre o sal�rio do trabalhador
void Empregado::setIR(float ir)
{
	this -> ir = (ir > 0 && ir <= 1) ? ir:0;
}

// M�todo para calcular e retornar o sal�rio l�quido do trabalhador
float Empregado::calculaSalario(void) const
{
	return (salarioBase - salarioBase*ir);
}

// M�todo para impress�o dos dados da classe 
// (N�o recomendado, mas � requisito da aplica��o)
void Empregado::getDados(void) const
{
	Pessoa::imprimeNomeCPF();
	
	cout << "N�mero da Se��o: " << numeroSecao << endl;
	cout << "Sal�rio L�quido: " << Empregado::calculaSalario() << " R$" << endl;
}
