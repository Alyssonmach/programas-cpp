#include "Velho.h"

Velho::Velho(string rua, int numero, string bairro, string cep, float preco) : Imovel(rua, numero, bairro, cep, preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this -> preco = preco;
}

void Velho::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

void Velho::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	
}

float Velho::getPreco(void) const
{
	return preco;
}

float Velho::getPrecoDesconto(void) const
{
	return preco - (preco * getDecrescenta());
}

void Velho::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "Número: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

float Velho::porcentagem_decrescimo = 10;