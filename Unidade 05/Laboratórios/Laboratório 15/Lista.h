#ifndef LISTA_H
#define LISTA_H

struct NomesFuncionarios
{
	string nome;
};

class Lista 
{
	private:
		NomesFuncionarios *ptr;
		NomesFuncionarios n;
		int maxLista;
		int total;
    public:
    	Lista(int);
    	void setLista(NomesFuncionarios);
    	void OrdenaAlfabetica(void);
    	void imprimeLista(void);
    	~Lista(void);
};

#endif