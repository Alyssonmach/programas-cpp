// Exercício 2.20: ex02_20.cpp
// Autor: Alysson Machado
// Data: 20/07/2020
// Horário: 16:13 PM
// Operações Trigonométricas
#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float pi = 3.14159;
	
	cout << "Digite o raio: ";
	cin >> raio;
	
	cout << "Diâmetros: " << raio * 2 << endl;
	cout << "Circunferência: " << 2 * pi * raio << endl;
	cout << "Área do Círculo: " << pi * raio * raio;
	
	return 0;
}