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
	Rational n1(0, 1), n2(0, 1), r;
	
	int num1, num2, den1, den2;
	
	cout << fixed << setprecision(3);
	
	cout << "=== Programa operações com frações ===" << endl << endl;
	
	cout << "Informe o numerador do primeiro número: ";
	cin >> num1;
	
	cout << "Informe o denominador do primeiro número: ";
	cin >> den1;
	
	cout << "Informe o numerador do segundo número: ";
	cin >> num2;
	
	cout << "Informe o denominador do segundo número: ";
	cin >> den2;
	
	n1.setRational(num1, den1);
	n2.setRational(num2, den2);
	
	cout << endl;
	
	// Atribui a r o resultado da multiplicação 
	r.multiplicaRational(n1, n2);
	
	// Obtém os dados armazenados no objeto r
	cout << "Os dados de r são: " << r.getNumerador() << "/" << r.getDenominador() << endl << endl;
	
	// Atribui a r o resultado da divisão 
	r.divideRational(n1, n2);
	
	// Obtém os dados armazenados no objeto r
	cout << "Os dados de r são: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	return 0;
}
