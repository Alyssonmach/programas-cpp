#include <iostream>
#include <locale>
#include "Horario.cpp"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Programa meu relógio" << endl << endl;
	
	Horario rel;
	
	rel.alteraHorario(23,48,56);
	
	cout << "Horário Universal: ";
	rel.imprUniv();
	
	cout << endl << endl;
	
	cout << "Horário Padrão: ";
	rel.imprPadr();
	
	
	
	return 0;
}