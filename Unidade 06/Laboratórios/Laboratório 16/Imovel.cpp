// Implementa��o de um programa que simula o gerenciamento de im�veis - Imovel.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#include "Imovel.h"

// definindo o construtor da classe Imovel
Imovel::Imovel(string rua, int numero, string bairro, string cep, float preco)
{
	this -> endereco.rua = rua;
	this -> endereco.numero = numero;
	this -> endereco.bairro = bairro;
	this -> endereco.CEP = cep;
	this ->preco = preco;	
}