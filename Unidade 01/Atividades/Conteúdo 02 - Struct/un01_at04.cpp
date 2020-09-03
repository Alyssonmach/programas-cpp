// Simulação de sistema de banco - un01_at04.cpp

// Biblioteca padrão para entrada e saída de dados
#include <iostream>
// Biblioteca padrão para localização de arquivos
#include <locale>
//Biblioteca padrão de manipulações de arquivos
#include <iomanip> 
// Biblioteca de propósitos gerais
#include <cstdlib>

// Definindo o número de contas
#define NUM 20

// Acessa as funções das bibliotecas padrão
using namespace std;

// Definindo uma struct
struct Saldo
{
	float dinheiro; // Atributo da struct
}; // Fim da struct

// Declarando os cabeçalhos das funções
void inicializador(Saldo [], int);
void consulta(Saldo [], int);
void saque(Saldo *, int);
void deposito(Saldo *, int);


// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as contas na struct
	Saldo contas[NUM];
	
	// Variável de controle do ATM e de número da conta
	int opcao, numero_conta;
	
	// Inicializando as contas
	inicializador(contas, NUM);
	
	do
	{
		// Apresentação do programa ao usuário
		cout << "Caixa de Banco" << endl << endl;
		
		
		// Menu de opções
		cout << fixed << setprecision(2);
		cout << "1 - Consulta ao Saldo" << endl; 
		cout << "2 - Realizar um Saque" << endl; 
		cout << "3 - Realizar um Depósito" << endl; 
		cout << "0 - Sair do programa" << endl; 
		
		// Recebe a escolha de acesso
		cout << "Informe a sua opção: ";
		cin >> opcao;
		
		// Recebe o número da conta do usuário
		if(opcao >= 1 && opcao <=3)
		{
			// Recebe a conta do usuário
			cout << "Informe sua conta: ";
			cin >> numero_conta;	
		}
		
		// Seleciona as escolhas do usuário
		if(opcao == 1)
		{
			consulta(contas, numero_conta);
		}
		else if(opcao == 2)
		{
			saque(contas, numero_conta);
		}
		else if(opcao == 3)
		{
			deposito(contas, numero_conta);
		}
		else
		{
			cout << "Processo Finalizado" << endl << endl;
			system("pause");
			system("cls");
		}
		
	}while(opcao != 0);
	
	// Indica que a função terminou com sucesso
	return 0;
} // Fim da função principal

// Função para inicializar o saldo das contas
void inicializador(struct Saldo *contas, int num)
{
	// Definindo uma variável para percorrer o vetor de contas
	int i;
	
	// Inicializando as contas
	for(i = 0; i < num; i++)
	{
		contas[i].dinheiro = 0;
	}
	 // Função não retorna nenhum valor
	return;
}

// Função para consulta do saldo bancário
void consulta(Saldo contas[], int numero_conta)
{
	// Imprime na saída de dados o saldo bancário
	cout << "Saldo Bancário: " << contas[numero_conta].dinheiro << endl << endl;
	system("pause");
	system("cls");
	
	// Função não retorna nenhum valor
	return;
}

// Função para saque bancário
void saque(struct Saldo *contas, int numero_conta)
{
	// Variável que recebe a quantia a ser sacada
	float dinheiro_out;
	
	// Recebe do usuário o dinheiro de saque
	cout << "Informe a quantida de saque: ";
	cin >> dinheiro_out;
	
	// Remove o dinheiro da conta e imprime o novo saldo
	if(dinheiro_out < contas[numero_conta].dinheiro)
	{
		contas[numero_conta].dinheiro = contas[numero_conta].dinheiro - dinheiro_out;
		cout << "Saque realizado com sucesso." << endl;
		cout << "Novo Saldo: " << contas[numero_conta].dinheiro << " R$." << endl;
		system("pause");
		system("cls");
	}
	// Caso o dinheiro atual seja menor que o saque, processo não autorizado
	else
	{
		cout << "Você possui " << contas[numero_conta].dinheiro << " R$.";
		cout << "Não é possível realizar o saque de " << dinheiro_out << " R$." << endl;
		system("pause");
        system("cls");
    }	
	
	// Função não retorna nenhum valor
	return;
}
// Função para depósito bancário
void deposito(struct Saldo *contas, int numero_conta)
{
	// Variável que recebe a quantia a ser depositada
	float dinheiro_in;
	
	// Recebe do usuário o dinheiro de saque
	cout << "Informe a quantida de depósito: ";
	cin >> dinheiro_in;

	contas[numero_conta].dinheiro = contas[numero_conta].dinheiro + dinheiro_in;
	cout << "Depósito realizado com sucesso." << endl;
	cout << "Novo Saldo: " << contas[numero_conta].dinheiro << " R$." << endl;
	system("pause");
	system("cls");
	  
	// Função não retorna nenhum valor
	return;
}



