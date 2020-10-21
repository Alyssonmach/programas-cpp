// Implementação de um programa que simula o gerenciamento de imóveis - Imovel.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 16 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef IMOVEL_H
#define IMOVEL_H

// definindo uma struct para armazenar o endereço do cliente
struct Endereco
{
	string rua;
	int numero;
	string bairro;
	string CEP;
};

// definindo uma classe base Imovel 
class Imovel 
{
	// Especificação de acesso protected para dar acesso a outras classes 
	protected:
		Endereco endereco;
		float preco;
	public:
		Imovel(string = " ", int = 0, string = " ", string = " ", float = 0.0);
};

#endif