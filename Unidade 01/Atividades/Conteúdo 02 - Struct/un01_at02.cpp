// Operações com Frações - un01_at02.cpp

// Biblioteca padrão de entrada e saída dos dados
#include <iostream>
// Biblioteca padrão para manipulação de string
#include <string>
// Biblioteca padrão para localização de arquivos
#include <locale>

// Usa funções da biblioteca padrão
using namespace std;

// Definindo uma struct
struct fracao
{
	int num, den; // Atributos do struct
};

// Declarando funções
float fracionador(int, int);
float operacoes(float, float, int);

// Função principal do programa
int main()
{
	// Definindo o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Definindo as variáveis da struct
	fracao numeros[2];
	
	// Declarando a variável
	int i, copia, opcao, verificador;
	
	// Mensagem de boas-vindas
	cout << "Programa que realiza operações com frações." << endl;
	
	// Recebendo os dados do usuário
	for(i = 0; i < 2; i++)
	{
		copia = i;
		cout << "Insira o " << ++copia << "º mumerador inteiro: ";
		cin >> numeros[i].num;
		
		do // Verificando se o denominador é diferente de zero
		{
			cout << "Insira o " << copia << "º denominador inteiro: ";
			cin >> numeros[i].den;
			
			if(numeros[i].den == 0)
			{
				cout << "Entrada Inválida. Tente novamente." << endl;
			}
		
		}while(numeros[i].den == 0);
	
	} // Fim da estrutura de repetição
	
	
	// Menu de escolhas da operação
	cout << "Escolha uma operação a ser realizada: " << endl;
	
	cout << "1 - Soma;" << endl;
	cout << "2 - Subtração;" << endl;
	cout << "3 - Multiplicação;" << endl;
	cout << "4 - Divisão;" << endl << endl;
	
	// Solicita a opção da operação
	cout << "Opção: ";
	cin >> opcao;
	
	do // Verificando se a opção foi digitada corretamente
	{
		
		if(opcao >= 1 && opcao <= 4)
		{
        // Realiza a operação com as frações informadas
		cout << "Operação: " << operacoes(fracionador(numeros[0].num, numeros[0].den),
			                                   fracionador(numeros[1].num, numeros[1].den),
							                   opcao) << endl;
        verificador = 1;
		}
		else
		{
		cout << "Opção invalida. Tente novamente." << endl;
		cout << "Opção: ";
		cin >> opcao;
		verificador = 0;
		}
		
	}while(verificador != 1);
		
	// Indica que o programa terminou com sucesso
	return 0;
}

// Função responsável por calcular as frações
float fracionador(int numerador, int denominador)
{
	float valor;
	
	valor = float(numerador) / float(denominador);
	
	return valor;
}

// Função responsável por realizar operações com as frações
float operacoes(float numero1, float numero2, int opcao)
{
	if(opcao == 1)
	{
		return numero1 + numero2;
	}
	else if(opcao == 2)
	{
		return numero1 - numero2;
	}
	else if(opcao == 3)
	{
		return numero1 * numero2;
	}
	else if(opcao == 4)
	{
		return numero1 / numero2;
	}
	
	return 0;
}