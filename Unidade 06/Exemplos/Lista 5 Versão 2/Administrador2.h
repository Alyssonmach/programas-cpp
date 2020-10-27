#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador: public Empregado{
	float ajudasDeCusto;
	public:
		Administrador();
		void setAjudasDeCusto(float);
		float getAjudasDeCusto() const;
		float calcularSalario() const;
		void imprime() const;
};

#endif