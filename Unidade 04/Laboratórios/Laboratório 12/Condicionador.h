// Implementando um programa que simula um condicionador - Condicionador.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 12 

#ifndef CONDICIONADOR_H
#define CONDICIONADOR_H

// Definindo uma classe condicionador
class Condicionador
{
	// Especificador de acesso public
	public:
		// Utilizando sobrecarga de construtores
		Condicionador(void);
		Condicionador(float, float);
		// Membros de fun��es da classe
		void setTemperatura(float);
		void setPotencia(float);
		float getTemperatura(void);
		float getPotencia(void);
    // Especifica��o de acesso private
	private:
		// Membros de dados da classe
		float temperatura, potencia;
		void ajustaCondicionador(void);
};

#endif