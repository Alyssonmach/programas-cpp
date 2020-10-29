// Implementando um programa de aritm�tica de fra��es - un03_lab07.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 09

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

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
		int getNumerador(void);
		int getDenominador(void);
}; // Fim da classe rational

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
	
	numerador = num1.numerador * num2.numerador;
	denominador = num1.denominador * num2.denominador;
	
	cout << "O valor resultante da multiplica��o �: " << float(numerador) / float(denominador) << endl;
	cout << "Em fra��es, teremos: " << numerador << "/" << denominador << endl << endl;
}

// Membro respons�vel por realizar a divis�o entre fra��es
void Rational::divideRational(Rational num1, Rational num2)
{
	
	numerador = num1.numerador * num2.denominador;
	denominador = num1.denominador * num2.numerador;
	
	cout << "O valor resultante da divis�o �: " << float(numerador) / float(denominador) << endl;
	cout << "Em fra��es, teremos: " << numerador << "/" << denominador << endl << endl;
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

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objetos da classe
	Rational n1(1, 2), n2(3, 4), r;
	
	cout << fixed << setprecision(3);
	
	cout << "=== Programa opera��es com fra��es ===" << endl << endl;
	
	// Atribui a r o resultado da multiplica��o 
	r.multiplicaRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	// Atribui a r o resultado da divis�o 
	r.divideRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	return 0;
}
