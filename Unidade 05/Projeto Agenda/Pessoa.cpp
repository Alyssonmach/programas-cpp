#include "Pessoa.h"

Pessoa::Pessoa(void)
{
	nome = "";
	endereco.rua = "";
	endereco.numero = 0;
	endereco.bairro = "";
	endereco.CEP = 0;
	DDD = 0;
	telefone = 0;
}

void Pessoa::setNome(string nome)
{
	this -> nome = nome;
}

void Pessoa::setEndereco(string rua, int numero, string bairro, int cep)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
}

void Pessoa::setDDD(int ddd)
{
	this -> DDD = ddd;
}

void Pessoa::setTelefone(int telefone)
{
	this -> telefone = telefone;
}

string Pessoa::getNome(void) const
{
	return nome;
}

Endereco Pessoa::getEndereco(void) const
{
	return endereco;
}

int Pessoa::getDDD(void) const
{
	return DDD;
}

int Pessoa::getTelefone(void) const
{
	return telefone;
}