#ifndef IMOVEL_H
#define IMOVEL_H

struct Endereco
{
	string rua;
	int numero;
	string bairro;
	string CEP;
};

class Imovel 
{
	protected:
		Endereco endereco;
		float preco;
	public:
		Imovel(string = " ", int = 0, string = " ", string = " ", float = 0.0);
};

#endif