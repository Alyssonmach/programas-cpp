#ifndef PESSOA_H
#define PESSOA_H

struct Endereco
{
	string rua;
	int numero;
	string bairro;
	int CEP;
};

class Pessoa 
{
	private:
		string nome;
		Endereco endereco;
		int DDD;
		int telefone;
	public:
		Pessoa(void);
		void setNome(string);
		void setEndereco(string, int, string, int);
		void setDDD(int);
		void setTelefone(int);
		string getNome(void) const;
		Endereco getEndereco(void) const;
		int getDDD(void) const;
		int getTelefone(void) const;
};

#endif