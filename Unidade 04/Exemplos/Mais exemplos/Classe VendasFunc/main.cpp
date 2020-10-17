#include "VendasFunc.cpp"
#include <locale>

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	VendasFunc funcionario;
	double cifravendas;
	
	for(int i = 0; i < 12; i++)
	{
		cout << "Digite a cifra de vendas do mês: " << i + 1 << ": ";
		cin >> cifravendas;
		funcionario.setVendas(i, cifravendas);
	}
	
	cout << endl;
	
	funcionario.imprTotalVendas();
	
	return 0;
}