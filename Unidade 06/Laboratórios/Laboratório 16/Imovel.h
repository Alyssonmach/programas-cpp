// Implementa��o de um programa que simula o gerenciamento de im�veis - Imovel.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef IMOVEL_H
#define IMOVEL_H

// definindo uma struct para armazenar o endere�o do cliente
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
	// Especifica��o de acesso protected para dar acesso a outras classes 
	protected:
		Endereco endereco;
		float preco;
	public:
		Imovel(string = " ", int = 0, string = " ", string = " ", float = 0.0);
};

#endif