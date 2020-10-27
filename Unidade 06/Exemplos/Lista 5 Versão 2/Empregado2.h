#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado:public Pessoa{
	int numeroSecao;
	float salarioBase;
	int inss;  //em porcentagem
	public:
		Empregado();
		void setNumeroSecao(int);
		int getNumeroSecao() const;
		void setSalarioBase(float);
		float getSalarioBase() const;
		void setInss(int);
		int getInss() const;
		float calcularSalario() const;
		void imprimeDadosEmp() const;
};

#endif