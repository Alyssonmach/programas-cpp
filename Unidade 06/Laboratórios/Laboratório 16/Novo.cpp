// Implementação de um programa que simula o gerenciamento de imóveis - Novo.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 16 
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

// Método da classe que configura o preço da casa nova
void Novo::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

// Método da classe que configura o endereço da casa nova
void Novo::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
}

// Método da classe que retorna preço da casa sem a taxa de aumento
float Novo::getPreco(void) const
{
	return preco;
}

// Método da classe que retorna o preço da nova casa com a taxa de aumento
float Novo::getPrecoAumento(void) const
{
	return preco + (preco * getAumenta());
}

// Método da classe que retorna o endereço da nova casa
void Novo::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "Número: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

// Inicializando a porcentagem de aumento (constante)
float Novo::porcentagem_aumento = 10;