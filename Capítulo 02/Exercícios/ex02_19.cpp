// Exercício 2.19: ex02_19.cpp
// Programa de cálculos aritméticos
#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int integer1;
	int integer2;
	int integer3;
	
	cout << "Enter three integers: ";
	cin >> integer1 >> integer2 >> integer3;
	
	cout << "Soma: " << integer1 + integer2 + integer3 << endl;
	cout << "Média: " << (integer1 + integer2 + integer3) / 2 << endl;
	cout << "Produto: " << integer1 * integer2 * integer3 << endl;
	
	if (integer1 <= integer2 && integer1 <=	integer3)
		cout << "Menor: " << integer1 << endl;
	else if (integer2 <= integer1 && integer2 <= integer3)
		cout << "Menor: " << integer2 << endl;
	else if (integer3 <= integer1 && integer3 <= integer2)
		cout << "Menor: " << integer3 << endl;
	
	if (integer1 >= integer2 && integer1 >=	integer3)
		cout << "Maior: " << integer1 << endl;
	else if (integer2 >= integer1 && integer2 >= integer3)
		cout << "Maior: " << integer2 << endl;
	else if (integer3 >= integer1 && integer3 >= integer2)
		cout << "Maior: " << integer3 << endl;
	
	return 0;
}