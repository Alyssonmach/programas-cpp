// Implementando um programa Cria e Ordena uma lista de nomes - Lista.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 05 - Laborat�rio 15

#ifndef LISTA_H
#define LISTA_H

// Criando uma struct Nomes Funcionarios
struct NomesFuncionarios
{
	string nome;
};

// Criando uma classe Lista
class Lista 
{
	// Especificador de acesso private
	private:
		// Membros de Dados da classe
		NomesFuncionarios *ptr;
		int maxLista;
		int total;
    // Especificador de acesso public
    public:
    	// Definindo um construtor para a classe
    	Lista(int);
    	// Membros de fun��es da classe
    	void setLista(NomesFuncionarios);
    	void OrdenaAlfabetica(void);
    	void imprimeLista(void);
    	// Definindo um destrutor da classe
    	~Lista(void);
};

#endif