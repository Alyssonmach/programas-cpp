#include "Imovel.h"

Imovel::Imovel(string rua, int numero, string bairro, string cep, float preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this ->preco = preco;	
}