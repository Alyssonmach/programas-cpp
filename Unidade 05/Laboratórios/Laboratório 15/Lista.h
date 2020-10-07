// Implementando um programa Cria e Ordena uma lista de nomes - Lista.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 05 - Laboratório 15

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
    	// Membros de funções da classe
    	void setLista(NomesFuncionarios);
    	void OrdenaAlfabetica(void);
    	void imprimeLista(void);
    	// Definindo um destrutor da classe
    	~Lista(void);
};

#endif