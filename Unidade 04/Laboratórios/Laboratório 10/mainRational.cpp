// Implementando um programa de aritm�tica de fra��es - mainRationa.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 10

#include <locale>
#include <iomanip>

#include "Rational.cpp"

using namespace std;

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objetos da classe
	Rational n1(0, 1), n2(0, 1), r;
	
	int num1, num2, den1, den2;
	
	cout << fixed << setprecision(3);
	
	cout << "=== Programa opera��es com fra��es ===" << endl << endl;
	
	cout << "Informe o numerador do primeiro n�mero: ";
	cin >> num1;
	
	cout << "Informe o denominador do primeiro n�mero: ";
	cin >> den1;
	
	cout << "Informe o numerador do segundo n�mero: ";
	cin >> num2;
	
	cout << "Informe o denominador do segundo n�mero: ";
	cin >> den2;
	
	n1.setRational(num1, den1);
	n2.setRational(num2, den2);
	
	cout << endl;
	
	// Atribui a r o resultado da multiplica��o 
	r.multiplicaRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl << endl;
	
	// Atribui a r o resultado da divis�o 
	r.divideRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	return 0;
}
