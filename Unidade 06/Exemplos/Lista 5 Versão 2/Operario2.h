#ifndef OPERARIO_H
#define OPERARIO_H

class Operario: public Empregado{
	float valorProducao;
	float comissao;  //em porcentagem
	public:
		Operario();
		void setValorProducao(float);
		float getValorProducao() const;
		void setComissao(float);
		float getComissao();
		float calcularSalario() const;
		void imprime() const;
};

#endif