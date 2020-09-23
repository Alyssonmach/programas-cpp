// Implementando um programa de aritmética de frações - mainRationa.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 03 - Laboratório 10

#include <locale>
#include <iomanip>

#include "Rational.cpp"

using namespace std;

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Instância ou objetos da classe
	Rational n1(2, 8), n2(3, 4), r;
	
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
