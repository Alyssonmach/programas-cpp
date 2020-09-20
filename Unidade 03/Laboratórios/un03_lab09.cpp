// Implementando um programa de aritmética de frações - un03_lab07.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 09

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
		// Aplicando construtores sobrecarregados (com e sem parâmetros)
		Rational();
		Rational(int, int);
		// Membros de funções da classe
		void multiplicaRational(Rational, Rational);
		void divideRational(Rational, Rational);
		int getNumerador(void);
		int getDenominador(void);
}; // Fim da classe rational

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
	
	numerador = num1.numerador * num2.numerador;
	denominador = num1.denominador * num2.denominador;
	
	cout << "O valor resultante da multiplicação é: " << float(numerador) / float(denominador) << endl;
	cout << "Em frações, teremos: " << numerador << "/" << denominador << endl << endl;
}

// Membro responsável por realizar a divisão entre frações
void Rational::divideRational(Rational num1, Rational num2)
{
	
	numerador = num1.numerador * num2.denominador;
	denominador = num1.denominador * num2.numerador;
	
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

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Instância ou objetos da classe
	Rational n1(1, 2), n2(3, 4), r;
	
	cout << fixed << setprecision(3);
	
	cout << "=== Programa operações com frações ===" << endl << endl;
	
	// Atribui a r o resultado da multiplicação 
	r.multiplicaRational(n1, n2);
	
	// Obtém os dados armazenados no objeto r
	cout << "Os dados de r são: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	// Atribui a r o resultado da divisão 
	r.divideRational(n1, n2);
	
	// Obtém os dados armazenados no objeto r
	cout << "Os dados de r são: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	return 0;
}
