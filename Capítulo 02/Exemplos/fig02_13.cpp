// Figura 2.13: fig02_13.cpp
// Data: 17/07/2020
// Horário: 10:46 AM
// Comparando inteiros utilizando instruções if, operadores relacionais
#include <iostream> // Permite ao programa realizar entrada e saída

using std::cout; // O programa utiliza cout
using std::cin; // O programa utiliza cin
using std:: endl; // O programa utiliza endl

// A função main inicia a execução do programa
int main()
{

	int number1; // Primeiro inteiro a comparar
	int number2; // Segundo inteiro a comparar
	
	cout << "Enter two integers to compare: "; // Solicita Dados do Usuário
	cin >> number1 >> number2; // Lê dois números inteiros fornecidos pelo usuário
	
	if(number1 == number2)
		cout << number1 << "==" << number2 << endl;
	
	if(number1 != number2)
		cout << number1 << "!=" << number2 << endl;
	
	if(number1 <= number2)
		cout << number1 << "<=" << number2 << endl;
	
	if(number1 >= number2)
		cout << number1 << ">=" << number2 << endl;
	
	if(number1 < number2)
		cout << number1 << "<" << number2 << endl;
	
	if(number1 > number2)
		cout << number1 << ">" << number2 << endl;
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da função main