// Implementando um programa que simula uma conta de poupan�a - ContaDePoupanca.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 13 

// Incluindo o arquivo de cabe�alho do programa
#include "ContaDePoupanca.h"
#include <iostream>

using std::cout;
using std::endl;

// Implementando o construtor sem par�metros para a classe
ContaDePoupanca::ContaDePoupanca(void)
{
	saldoDaPoupanca = 0;
}

// Implementando o construtor com par�metros para a classe
ContaDePoupanca::ContaDePoupanca(float saldo)
{
	setSaldoDaPoupanca(saldo);
}

// Implementando um m�todo da classe respons�vel por calcular o rendimento mensal do cliente
void ContaDePoupanca::calculeRendimentoMensal(void)
{
	cout << "Rendimento Mensal: " << (saldoDaPoupanca * taxaDeJurosAnual) / 12 << " R$" << endl;
	saldoDaPoupanca += ((saldoDaPoupanca * taxaDeJurosAnual) / 12);
}

// Implementando um m�todo da classe que configura o saldo inicial do usu�rio
void ContaDePoupanca::setSaldoDaPoupanca(float saldo)
{
	saldoDaPoupanca = (saldo >= 0) ? saldo : saldoDaPoupanca;
}

// Implementando um m�todo respons�vel por obter a poupan�a do usu�rio 
float ContaDePoupanca::getSaldoDaPoupanca(void) const
{
	return this -> saldoDaPoupanca;
}

float ContaDePoupanca::taxaDeJurosAnual = 0;