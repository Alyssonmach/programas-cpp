// Programa gerenciador de estoque em produto - Produto.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 20
// Ambiente de Desenvolvimento: Falcon C++

#include "Produto.h"

// definindo o construtor da classe base produto
Produto::Produto(float preco, int estoque, string nome)
{
	this -> preco = (preco > 0) ? preco : 0;
	this -> estoque = (estoque > 0) ? estoque : 0;
	this -> nome = nome;
}

// m�todo retorna o pre�o do produto 
float Produto::getPreco(void) const
{
	return preco;
}

// m�todo retorna a quantidade de produtos limite em estoque
int Produto::getEstoque(void) const
{
	return estoque;
}

// m�todo retorna o nome do produto
string Produto::getNome(void) const
{
	return nome;
}