#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

class Horario
{
	private:
		int hora;// 0 - 23
		int minuto; // 0 - 59
		int segundo; // 0 - 59
    public:
    	Horario(void);
    	void alteraHorario(int, int, int);
    	void imprUniv(void); // Formato Universal
    	void imprPadrao(void); //Formato Padrão Americano
};  

Horario::Horario(void)
{
	hora = minuto = segundo = 0;
}

void Horario::alteraHorario(int h, int m, int s)
{
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0;
	segundo = (s >= 0 && s < 60) ? s : 0;
}

void Horario::imprUniv(void)
{
	cout << setfill('0') << setw(2) << hora << ":";
	cout << setw(2) << minuto << ":" << setw(2) << segundo;
}

void Horario::imprPadrao(void)
{
	cout << setfill('0') << setw(2) << ((hora == 0 || hora == 12) ? 12 : hora % 12);
	cout << ":" << setw(2) << minuto << ":";
	cout << setw(2) << segundo << ((hora < 12) ? " AM" : " PM");
}

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