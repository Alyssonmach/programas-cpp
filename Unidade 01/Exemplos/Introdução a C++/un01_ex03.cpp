// Entrada de Dados - un01_ex03.cpp

// Biblioteca dos comandos padrão de entrada e saída
#include <iostream>

// Biblioteca de localização de programas
#include <locale>

// Pacote std define o conjunto de funções que será usado no
// programa, agrupando todas as bibliotecas de C++ pré-definidas
using namespace std;

// Declarando a função principal
int main()
{
	setlocale(LC_ALL, "portuguese"); // Padrão de idioma brasileiro
	
	// inicializando as variáveis
	int v1, v2, soma;
	
	cout << "Informe o primeiro valor: "; // Saída de dados para o usuário
	cin >> v1; // Solicita dados ao usuário
	
	cout << "Informe o segundo valor: "; // Saída de dados para o usuário
	cin >> v2; // Solicita dados ao usuário
	
	// atribuindo a soma "v1" e "v2" a variável "soma"
	soma = v1 + v2;
	
	// Saída de dados para o usuário
	cout << "O valor da soma de " << v1 << " + " << v2 << " é " << soma << endl;
	
	// Imprimindo uma expressão aritmética para o usuário
	cout << "O resto da divisão é " << v1 % v2 << endl;
	
	// Indica que o programa terminou com sucesso
	return 0; 
} // Fim da função principal
