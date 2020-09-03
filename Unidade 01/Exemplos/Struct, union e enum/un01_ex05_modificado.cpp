// Criando uma struct usando Arrays (melhorado) - un01_ex05_modificado.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca para manipulação de strings
#include <string>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Usa funções da biblioteca padrão
using namespace std;

// Definindo uma struct
struct Produto
{
	string nome; // Atributo nome
	int numero; // Atributo numero
}; // Fim da struct

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// inicializando as variáveis da struct
	Produto produtos[10] = {{"Morango", 1}, {"Abobora", 2}, {"Verduras", 3}, {"Leite", 4}, {"Abóbora", 5},
						 	{"Afofado", 6}, {"Risoto", 7}, {"Molhos", 8}, {"Desodorante", 9}, {"Pamonha", 10}};
	
	// Saída de dados do array de struct
	for(int i = 0; i < 10; i++)
	{
		cout << "Produto: " << produtos[i].nome << endl;
		cout << "Número: " << produtos[i].numero << endl << endl;
	}
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal
