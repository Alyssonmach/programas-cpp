// Exercício 2.24: ex02_24.cpp
// Autor: Alysson Machado
// Data: 27/07/2020
// Horário: 16:05 PM
// Número ímpar e número par
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	
	cout << "Type an integer: ";
	
	cin >> number;
	
	if(number % 2 == 0)
		cout << "The integer is even." << endl;
	else
		cout << "The integer is odd." << endl;
	
	return 0;
}