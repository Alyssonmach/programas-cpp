// Implementação de um programa que simula o registro de empregados - Empregado.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 17 
// Ambiente de Desenvolvimento: Falcon C++

#include "Empregado.h"

// Definindo o construtor da classe Empregado
Empregado::Empregado(int numeroSecao, float salarioBase, float ir)
{
	this -> numeroSecao = numeroSecao;
	this -> salarioBase = salarioBase;
	this -> ir = ir;
}

// Método da classe para cadastrar o número da seção do trabalhador
void Empregado::setNumeroSecao(int numeroSecao)
{
	this -> numeroSecao = (numeroSecao > 0) ? numeroSecao:0;
}

// Método da classe para cadastrar o salário bruto do trabalhador
void Empregado::setSalarioBase(float salarioBase)
{
	this -> salarioBase = (salarioBase > 0) ? salarioBase:0;
}

// Método da classe para cadastrar a taxa de imposto de renda 
// sobre o salário do trabalhador
void Empregado::setIR(float ir)
{
	this -> ir = (ir > 0 && ir <= 1) ? ir:0;
}

// Método para calcular e retornar o salário líquido do trabalhador
float Empregado::calculaSalario(void) const
{
	return (salarioBase - salarioBase*ir);
}

// Método para impressão dos dados da classe 
// (Não recomendado, mas é requisito da aplicação)
void Empregado::getDados(void) const
{
	Pessoa::imprimeNomeCPF();
	
	cout << "Número da Seção: " << numeroSecao << endl;
	cout << "Salário Líquido: " << Empregado::calculaSalario() << " R$" << endl;
}
