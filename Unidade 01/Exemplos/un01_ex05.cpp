// Criando uma struct usando Arrays - un01_ex05.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca para manipulação de strings - un01_ex04.cpp
#include <string>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Usa funções da biblioteca padrão
using namespace std;

// Definindo uma constante
#define PROD 10

// Definindo uma struct
struct Produto
{
	string nome; // Atributo nome
	int numero; // Atributo numero
}; // Fim da struct

// Definindo um array de struct
struct Produto registrador[PROD];

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as variáveis
	int i, copia;
	char produtos[10][50] = {"Morango", "Abobora", "Verduras", "Leite", 
                             "Abóbora", "Afofado", "Risoto", "Molhos",
                             "Desodorante", "Pamonha"};
	
    // Interando os dados no array de struct
	for(i = 0; i < 10; i++)
	{
		copia = i;
		registrador[i].nome = produtos[i];
		registrador[i].numero = ++copia;	
	}
	
	// Saída de dados do array de struct
	for(i = 0; i < 10; i++)
	{
		cout << "Produto: " << registrador[i].nome << endl;
		cout << "Número: " << registrador[i].numero << endl << endl;
	}
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal