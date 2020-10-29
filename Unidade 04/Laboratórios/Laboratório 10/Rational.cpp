// Implementando um programa de aritm�tica de fra��es - Rational.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 10 

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Rational.h"


// Implementa��o do construtor sem par�metros da classe
Rational::Rational(void)
{
	numerador = 0;
	denominador = 1;
}

// Implementa��o do construtor com par�metros da classe
Rational::Rational(int num, int den)
{
	numerador = num;
	denominador = den;
}
// Implementa��o dos m�todos dos membros de fun��o da classe

// Membro respons�vel por realizar a multiplica��o entre fra��es
void Rational::multiplicaRational(Rational num1, Rational num2)
{
	if(num1.denominador != 0 && num2.denominador != 0)
	{
		numerador = num1.numerador * num2.numerador;
		denominador = num1.denominador * num2.denominador;
	}
	
	cout << "O valor resultante da multiplica��o �: " << float(numerador) / float(denominador) << endl;
	cout << "Em fra��es, teremos: " << numerador << "/" << denominador << endl << endl;
}

// Membro respons�vel por realizar a divis�o entre fra��es
void Rational::divideRational(Rational num1, Rational num2)
{
	if(num1.denominador != 0 && num2.denominador != 0)
	{
		numerador = num1.numerador * num2.denominador;
		denominador = num1.denominador * num2.numerador;
	}
	
	cout << "O valor resultante da divis�o �: " << float(numerador) / float(denominador) << endl;
	cout << "Em fra��es, teremos: " << numerador << "/" << denominador << endl << endl;
}

void Rational::setRational(int num, int den)
{
	numerador = num;
	denominador = den;
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