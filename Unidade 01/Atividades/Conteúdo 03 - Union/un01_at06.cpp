// Analisando a estrutura da Union - un01_at06.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Acessa as funções das bibliotecas padrão
using namespace std;

// Definindo uma union
union Integer
{
	char caracter1;
	short short1;
	int integer1;
	long long1;
}; // Fim da union

// Função principal do programa
int main(void)
{
	// Configura o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Definindo um objeto da union
	Integer valores;
	
	// Informando a finalidade do programa
	cout << "Programa que analisa a estrutura de uma Union." << endl << endl;
	
	cout << "Insira os valores solicitados." << endl;
	
	cout << "Insira um char: ";
	cin >> valores.caracter1;
	
	cout << "Insira um short: ";
	cin >> valores.short1;
	
	cout << "Insira um int: ";
	cin >> valores.integer1;
	
	cout << "Insira um long: ";
	cin >> valores.long1;
	
	cout << endl;
	
	cout << "Char:" << valores.caracter1 << endl;
	cout << "Short:" << valores.short1 << endl;
	cout << "Int:" << valores.integer1 << endl;
	cout << "Long:" << valores.long1 << endl;
	
	// Indica que o programa termina com sucesso
	return 0;
} // Fim da função main