// Resto da divisão de dois números - un01_at01.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Pacote std define o conjunto de funções que será usado no
// programa, agrupando todas as bibliotecas de C++ pré-definidas
using namespace std;

// Função principal do programa
int main()
{
	// comfigurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as variáveis
	int num1, num2;
	
	// Saída de Dados
	cout << "Insira dois números inteiros: "; 
	// Entrada de Dados
	cin >> num1 >> num2; 
	
	// Saída de Dados
	cout << "O resto da divisão de " << num1 << " por " << num2 << " é ";
	cout << num1 % num2 << endl;
	 
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal