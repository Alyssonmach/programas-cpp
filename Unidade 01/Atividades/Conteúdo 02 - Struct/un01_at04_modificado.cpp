#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <string>
using std::string;

#include <locale>

struct Conta
{
	string nome;
	float saldo;
	
	void consultarSaldo()
	{
		cout << "Saldo do cliente " << nome << ": R$ " << saldo << endl;
	}
	
	void depositar(float deposito)
	{
		saldo += deposito;
	}
	
	void sacar(float saque)
	{
		saldo -= (saque < saldo) ? saque : 0;
	}
	
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	// Criando um array de contas por meio de alocação dinâmica
	Conta *contas = new Conta[20];
	// Inicializando as contas com valores quais quer
	int aux(65);
	for(int i(0); i < 20; i++)
	{
		contas[i].nome = static_cast<char>(aux);
		contas[i].saldo = aux;
		aux++;
	}
	
	cout << fixed << setprecision(2);
	for(int i(0); i < 20; i++)
		cout << contas[i].nome << " --> " << contas[i].saldo << endl;
	
	contas[0].depositar(100.75);
	contas[10].sacar(55.25);
	
	cout << "\nApós as modificações:\n\n";
	for(int i(0); i < 20; i++)
		cout << contas[i].nome << " --> " << contas[i].saldo << endl;
	
	cout << endl;
	contas[10].consultarSaldo();
	
	return 0;
}
