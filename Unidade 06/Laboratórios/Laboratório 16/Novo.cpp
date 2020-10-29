// Implementa��o de um programa que simula o gerenciamento de im�veis - Novo.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#include "Novo.h"

// Definindo um construtor para a classe Novo
Novo::Novo(string rua, int numero, string bairro, string cep, float preco) : Imovel(rua, numero, bairro, cep, preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this -> preco = preco;
}

// M�todo da classe que configura o pre�o da casa nova
void Novo::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

// M�todo da classe que configura o endere�o da casa nova
void Novo::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
}

// M�todo da classe que retorna pre�o da casa sem a taxa de aumento
float Novo::getPreco(void) const
{
	return preco;
}

// M�todo da classe que retorna o pre�o da nova casa com a taxa de aumento
float Novo::getPrecoAumento(void) const
{
	return preco + (preco * getAumenta());
}

// M�todo da classe que retorna o endere�o da nova casa
void Novo::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "N�mero: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

// Inicializando a porcentagem de aumento (constante)
float Novo::porcentagem_aumento = 10;