#include "Novo.h"

Novo::Novo(string rua, int numero, string bairro, string cep, float preco) : Imovel(rua, numero, bairro, cep, preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this -> preco = preco;
}

void Novo::setPreco(float preco)
{
	this -> preco = (preco > 0) ? preco:(this -> preco);
}

void Novo::setEndereco(string rua, int numero, string bairro, string cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
}

float Novo::getPreco(void) const
{
	return preco;
}

float Novo::getPrecoAumento(void) const
{
	return preco + (preco * getAumenta());
}

void Novo::getEndereco(void) const
{
	cout << "Rua: " << endereco.rua << endl;
	cout << "Número: " << endereco.numero << endl;
	cout << "Bairro: " << endereco.bairro << endl;
	cout << "CEP: " << endereco.CEP << endl;
}

float Novo::porcentagem_aumento = 10;