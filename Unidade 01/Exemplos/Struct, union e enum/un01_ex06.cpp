// Estrutura Union - un01_ex06.cpp

// Biblioteca padrão de entrada e saída
#include <iostream>
// Biblioteca de localização de arquivos
#include <locale>

// Acessa as funções da biblioteca
using namespace std;

// Iniciando um Union
union Numero
{
	int inteiro; // Atributio da union
	double pt_flt; // Atributio da union
}; // Fim da union

// Função principal do programa
int main()
{
	// Configurando o idioma português
	setlocale(LC_ALL, "portuguese");
	
	Numero valor;
	
	valor.inteiro = 100;
	
	cout << "Inteiro: " << valor.inteiro << endl;
	cout << "Double: " << valor.pt_flt << endl;
	
	valor.pt_flt = 100;
	
	cout << "Inteiro: " << valor.inteiro << endl;
	cout << "Double: " << valor.pt_flt << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
}