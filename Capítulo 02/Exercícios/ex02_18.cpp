// Exercício 2.18: ex02_18.cpp
// Maior de dois números
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
	
	if(integer1 > integer2)
		cout << integer1 << " é o maior." << endl;
	else if (integer2 > integer1)
		cout << integer2 << " é o maior." << endl;
	else
		cout << "Estes números são iguais." << endl;
	
	return 0;
}