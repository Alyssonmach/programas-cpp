// Implementação de um programa que simula o gerenciamento de imóveis - Velho.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 16 
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

// Método da classe que configura o preço da casa velha
void Velho::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

// Método da classe que configura o endereço da casa velha
void Velho::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	
}

// Método da classe que retorna o preço sem a taxa de desconto da casa velha
float Velho::getPreco(void) const
{
	return preco;
}

// Método da classe que retorna o preço com a taxa de desconto da casa velha
float Velho::getPrecoDesconto(void) const
{
	return preco - (preco * getDecrescenta());
}

// Método da classe que retorna o endereço da casa velha
void Velho::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "Número: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

// Inicializando a porcentagem de desconto (constante)
float Velho::porcentagem_decrescimo = 10;