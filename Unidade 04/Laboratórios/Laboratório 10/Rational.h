// Implementando um programa de aritmética de frações - Rational.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 10

#ifndef Rational_H
#define Rational_H

// Definindo a classe Rational
class Rational
{
	// Modificador de acesso private
	private:
		// membros de dados da classe
		int numerador, denominador;
	public:
		// Aplicando construtores sobrecarregados (com e sem parâmetros)
		Rational();
		Rational(int, int);
		// Membros de funções da classe
		void multiplicaRational(Rational, Rational);
		void divideRational(Rational, Rational);
		int getNumerador(void);
		int getDenominador(void);
}; // Fim da classe rational

#endif