// Implementando um programa que simula uma conta de poupança - ContaDePoupanca.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 13 

// Incluindo o arquivo de cabeçalho do programa
#include "ContaDePoupanca.h"
#include <iostream>

using std::cout;
using std::endl;

// Implementando o construtor sem parâmetros para a classe
ContaDePoupanca::ContaDePoupanca(void)
{
	saldoDaPoupanca = 0;
}

// Implementando o construtor com parâmetros para a classe
ContaDePoupanca::ContaDePoupanca(float saldo)
{
	setSaldoDaPoupanca(saldo);
}

// Implementando um método da classe responsável por calcular o rendimento mensal do cliente
void ContaDePoupanca::calculeRendimentoMensal(void)
{
	cout << "Rendimento Mensal: " << (saldoDaPoupanca * taxaDeJurosAnual) / 12 << " R$" << endl;
	saldoDaPoupanca += ((saldoDaPoupanca * taxaDeJurosAnual) / 12);
}

// Implementando um método da classe que configura o saldo inicial do usuário
void ContaDePoupanca::setSaldoDaPoupanca(float saldo)
{
	saldoDaPoupanca = (saldo >= 0) ? saldo : saldoDaPoupanca;
}

// Implementando um método responsável por obter a poupança do usuário 
float ContaDePoupanca::getSaldoDaPoupanca(void) const
{
	return this -> saldoDaPoupanca;
}

float ContaDePoupanca::taxaDeJurosAnual = 0;