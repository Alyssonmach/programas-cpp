// Programa gerenciador de estoque em produto - Produto.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 20
// Ambiente de Desenvolvimento: Falcon C++

#include "Produto.h"

// definindo o construtor da classe base produto
Produto::Produto(float preco, int estoque, string nome)
{
	this -> preco = (preco > 0) ? preco : 0;
	this -> estoque = (estoque > 0) ? estoque : 0;
	this -> nome = nome;
}

// método retorna o preço do produto 
float Produto::getPreco(void) const
{
	return preco;
}

// método retorna a quantidade de produtos limite em estoque
int Produto::getEstoque(void) const
{
	return estoque;
}

// método retorna o nome do produto
string Produto::getNome(void) const
{
	return nome;
}