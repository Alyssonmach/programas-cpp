// Estrutura Union - un01_ex07.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Definindo constantes
#define GRAUS 'G'
#define RAD 'R'

// Acessa funções de bibliotecas padrão
using namespace std;

// Declarando uma Union
union Angulo
{
	int graus;
	float radianos;
}; // Fim da union

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	Angulo ang;
	char op;
	
	cout << "Números em graus ou em radianos? " << endl;
	cin >> op;
	
	if(op == GRAUS)
	{
		ang.graus = 180;
		cout << "Ângulo: " << ang.graus << endl;
	}
	else if(op == RAD)
	{
		ang.radianos = 3.1415;
		cout << "Ângulo: " << ang.radianos << endl;
	}
	else
	{
		cout << "Entrada Inválida!" << endl;
	}
	
	// Indica que a função terminou com sucesso
	return 0;
}