// Exercício 2.16: ex02_16.cpp
// Programa de cálculos aritméticos
#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int integer1;
	int integer2;
	
	cout << "Enter two integers: ";
	cin >> integer1 >> integer2;
	
	cout << "Soma: " << integer1 + integer2 << endl;
	cout << "Produto: " << integer1 * integer2 << endl;
	
	if (integer1 >= integer2)
		cout << "Diferença: " << integer1 - integer2 << endl;
	else
		cout << "Diferença: " << integer2 - integer1 << endl;
	
	if (integer1 >= integer2)
		cout << "Quociente: " << integer1 / integer2 << endl;
	else
		cout << "Quociente: " << integer2 / integer1 << endl;
	
	return 0;
}