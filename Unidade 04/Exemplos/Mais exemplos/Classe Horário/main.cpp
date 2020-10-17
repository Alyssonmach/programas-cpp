#include <iostream>

using namespace std;

#include "Horario.cpp"

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	Horario t;
	
	cout << "O horário universal é: " << endl;
	t.imprUniv();
	
	cout << endl;
	
	cout << "O horário americano é: " << endl;
	t.imprPadrao();
	
	t.alteraHorario(22, 45, 13);
	
	cout << endl;
	
	cout << "O horário universal é: " << endl;
	t.imprUniv();
	
	cout << endl;
	
	cout << "O horário americano é: " << endl;
	t.imprPadrao();
	
	return 0;
}