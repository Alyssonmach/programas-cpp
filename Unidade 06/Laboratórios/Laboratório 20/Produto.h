// Programa gerenciador de estoque em produto - Produto.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 20
// Ambiente de Desenvolvimento: Falcon C++

#ifndef PRODUTO_H
#define PRODUTO_H

// definindo a classe produto
class Produto 
{	
	private:
		float preco;
		int estoque;
		string nome;
	public:
		Produto(float = 0.0, int = 0, string = " ");
		float getPreco(void) const;
		int getEstoque(void) const;
		string getNome(void) const;
};

#endif