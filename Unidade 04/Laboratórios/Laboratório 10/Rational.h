// Implementando um programa de aritm�tica de fra��es - Rational.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 10

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
		// Aplicando construtores sobrecarregados (com e sem par�metros)
		Rational();
		Rational(int, int);
		// Membros de fun��es da classe
		void multiplicaRational(Rational, Rational);
		void divideRational(Rational, Rational);
		void setRational(int, int);
		int getNumerador(void);
		int getDenominador(void);
}; // Fim da classe rational

#endif