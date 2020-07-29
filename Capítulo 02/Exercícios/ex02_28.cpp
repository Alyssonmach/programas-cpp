// Exercício 2.28: ex02_28.cpp
// Separa os digitos de um inteiro com cinco digitos
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	int number;
	cout << "Enter an integer with five digits: ";
	cin >> number;
	
	cout << number / 10000 << " " << (number / 1000) % 10 << " ";
	cout << (number / 100) % 10 << " " << (number / 10) % 10;
	cout << " " << number % 10 << endl;
	
	return 0;
}