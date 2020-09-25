// Implementando um programa que simula um condicionador - Condicionador.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 04 - Laboratório 12 

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
		// Membros de funções da classe
		void setTemperatura(float);
		void setPotencia(float);
		float getTemperatura(void);
		float getPotencia(void);
    // Especificação de acesso private
	private:
		// Membros de dados da classe
		float temperatura, potencia;
		void ajustaCondicionador(void);
};

#endif