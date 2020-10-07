#ifndef AGENDA_H
#define AGENDA_H

class Agenda 
{
	private:
		string nome;
		long int CPF;
		int maxLista; // Tamanho máximo da lista
		Pessoa *ptr;
		int t; // Número atual de pessoas na lista
	public:
		Agenda(int);
		void setNome(string);
		void setCPF(long int);
		void setAgenda(Pessoa);
		void insereNove(int); // Insere o número 9 de acordo com o DDD
		string getNome(void) const;
		long int getCPF(void) const;
		void imprimeAgenda() const;
		~Agenda();
		
};

#endif