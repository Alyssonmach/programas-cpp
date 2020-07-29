// Exercício 2.25: ex02_25.cpp
// Número e múltiplo
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number1, number2;
	
	cout << "Enter the first integer: ";
	cin >> number1;
	
	cout << "Enter the second integer: ";
	cin >> number2;
	
	if(number1 % number2 == 0)
		cout << number1 << " is multiple of " << number2 << "." << endl;
	  
	return 0;
}