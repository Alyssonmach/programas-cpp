#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario
{
	public:
		Funcionario(void);
		Funcionario(string, float, int, int, int);
		~Funcionario(void);
		void setNome(string);
		void setSalario(float);
		void setAdmissao(int, int, int);
		string getNome const;
		float getSalario const;
		void getAdmissao(int*, int*, int*) const;
		
	private:
		string nome;
		float salario;
		int dia, mes, ano;
};

#endif