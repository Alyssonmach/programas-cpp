// Implementa��o de um programa que simula o gerenciamento de im�veis - Velho.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#include "Velho.h"

// Definindo o construtor da classe Velho
Velho::Velho(string rua, int numero, string bairro, string cep, float preco) : Imovel(rua, numero, bairro, cep, preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this -> preco = preco;
}

// M�todo da classe que configura o pre�o da casa velha
void Velho::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

// M�todo da classe que configura o endere�o da casa velha
void Velho::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	
}

// M�todo da classe que retorna o pre�o sem a taxa de desconto da casa velha
float Velho::getPreco(void) const
{
	return preco;
}

// M�todo da classe que retorna o pre�o com a taxa de desconto da casa velha
float Velho::getPrecoDesconto(void) const
{
	return preco - (preco * getDecrescenta());
}

// M�todo da classe que retorna o endere�o da casa velha
void Velho::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "N�mero: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

// Inicializando a porcentagem de desconto (constante)
float Velho::porcentagem_decrescimo = 10;