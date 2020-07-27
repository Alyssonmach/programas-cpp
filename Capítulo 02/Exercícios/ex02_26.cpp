// Exercício 2.26: ex02_26.cpp
// Autor: Alysson Machado
// Data: 27/07/2020
// Horário: 16:16 PM
// padrão de tabuleiro
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	
	int i, j;
	
	for(i = 0; i <= 8 - 1; i++)
	{
		for(j = 0; j <= 8 - 1; j++)
		{
			if(i % 2 == 0)
				cout << "* ";
			else
				cout << " *";
		}
		cout << endl;
	}
	
	return 0;
}