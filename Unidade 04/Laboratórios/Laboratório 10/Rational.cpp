// Implementando um programa de aritmética de frações - Rational.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 10 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Rational.h"


// Implementação do construtor sem parâmetros da classe
Rational::Rational(void)
{
	numerador = 0;
	denominador = 1;
}

// Implementação do construtor com parâmetros da classe
Rational::Rational(int num, int den)
{
	numerador = num;
	denominador = den;
}
// Implementação dos métodos dos membros de função da classe

// Membro responsável por realizar a multiplicação entre frações
void Rational::multiplicaRational(Rational num1, Rational num2)
{
	if(num1.denominador != 0 && num2.denominador != 0)
	{
		numerador = num1.numerador * num2.numerador;
		denominador = num1.denominador * num2.denominador;
	}
	
	cout << "O valor resultante da multiplicação é: " << float(numerador) / float(denominador) << endl;
	cout << "Em frações, teremos: " << numerador << "/" << denominador << endl << endl;
}

// Membro responsável por realizar a divisão entre frações
void Rational::divideRational(Rational num1, Rational num2)
{
	if(num1.denominador != 0 && num2.denominador != 0)
	{
		numerador = num1.numerador * num2.denominador;
		denominador = num1.denominador * num2.numerador;
	}
	
	cout << "O valor resultante da divisão é: " << float(numerador) / float(denominador) << endl;
	cout << "Em frações, teremos: " << numerador << "/" << denominador << endl << endl;
}

// Retorna o numerador do objeto
int Rational::getNumerador(void)
{
	return numerador;
}

// Retorna o denominador do objeto
int Rational::getDenominador(void)
{
	return denominador;
} 