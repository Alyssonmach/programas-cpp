// Implementação de um programa que simula o gerenciamento de imóveis - Imovel.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 16 
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