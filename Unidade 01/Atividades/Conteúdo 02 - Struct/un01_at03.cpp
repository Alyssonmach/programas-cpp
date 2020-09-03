// Soma e multiplicação com números inteiros - un01_at03.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca padrão para localização de arquivos
#include <locale>
// Biblioteca padrão de manipulação de arquivos
#include <iomanip>

// Usa as funções das bibliotecas padrão
using namespace std;

// Definindo uma struct
struct Num_complex
{
	float parte_real, parte_imaginaria; // Atributos da struct
};

void soma_complexa(Num_complex [], int);
void multiplicacao_complexa(Num_complex []);

#define TAM 2

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Declarando um vetor de variáveis para a struct;
	Num_complex valores[TAM];
	
	// Inicializando as variáveis
	int i, copia; 
	
	// Boas-vindas ao usuário
	cout << "Programa que Soma e Multiplica com números inteiros." << endl << endl;
	
	// Recebendo os dados do usuário
	for(i =0; i < 2; i++)
	{
		copia = i;
		cout << "Informe a parte real do " << ++copia << "º número: ";
		cin >> valores[i].parte_real;
		cout << "Informe a parte imaginária do " << copia << "º número: ";
		cin >> valores[i].parte_imaginaria;
		cout << endl;
	}
	
	// Imprime a soma e a multiplicação com os números imaginários
	soma_complexa(valores, TAM);
	multiplicacao_complexa(valores);
	
	// Indica que a função terminou com sucesso
	return 0;
}

// Função que soma números complexos
void soma_complexa(Num_complex valores[], int tam)
{
	float real = 0, imaginario = 0;
	int i;
	
	for(i =0; i < tam; i++)
	{
		real += valores[i].parte_real;
		imaginario += valores[i].parte_imaginaria;
	}
	cout << fixed << setprecision(3);
	cout << "Soma: " << real << " + " << imaginario << "i;" << endl;
	
	return;
}

// Função que realiza a multiplicação de números complexos
void multiplicacao_complexa(Num_complex valores[])
{
	float real = 0, imaginario = 0;
	
	real += valores[0].parte_real * valores[1].parte_real - valores[0].parte_imaginaria * valores[1].parte_imaginaria;
	imaginario += valores[0].parte_imaginaria * valores[1].parte_real + valores[1].parte_imaginaria * valores[0].parte_real;
	
	cout << fixed << setprecision(3);
	cout << "Multiplicação: " << real << " + " << imaginario << "i;" << endl;
	
	return;
}