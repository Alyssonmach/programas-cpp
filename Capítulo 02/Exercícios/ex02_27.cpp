// Exercício 2.27: ex02_27.cpp
// Equivalente inteiro de um caractere
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char alpha;
	
	cout << "Enter a character: ";
	cin >> alpha;
	
	cout << static_cast < int >(alpha);
	
	return 0;
}