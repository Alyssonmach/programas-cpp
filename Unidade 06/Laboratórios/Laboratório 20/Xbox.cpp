// Programa gerenciador de estoque em produto - Xbox.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 20
// Ambiente de Desenvolvimento: Falcon C++

#include "Xbox.h"

// definindo o construtor da classe
Xbox::Xbox(float preco, int estoque, string nome, float desconto) : Produto(preco, estoque, nome)
{
	this -> desconto = (desconto > 0) ? desconto : 0;
}

// m�todo que retorna a porcentagem de desconto aplicado quando o produto passa do limite em estoque
float Xbox::getDesconto(void) const
{
	return desconto;
}

// m�todo que verifica se o desconto precisa ser aplicado ou n�o
bool Xbox::verificaDesconto(int estoque_atual) const
{
	if(estoque_atual > getEstoque())
	{
		return true;
	}
	else
	{
		return false;
	}
	
	return false;
}

// m�todo que retorna o pre�o atual com desconto ou sem desconto, de acordo com o estoque atual
float Xbox::getPrecoAtual(int estoque_atual) const
{
	if (estoque_atual > getEstoque())
	{
		return getPreco() - desconto * getPreco();
	}
	else
	{
		return getPreco();
	}
	
	return 0;
}