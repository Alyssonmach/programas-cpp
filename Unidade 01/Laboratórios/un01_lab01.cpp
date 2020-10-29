// Usando uma struct para definir a dist�ncia entre dois pontos - un01_lab01.cpp

// Unidade 01 - Laborat�rio de Programa��o 01

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca de localiza��o de arquivos
#include <locale>
// Biblioteca para manipula��o de dados
#include <iomanip>

#include <cmath>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma struct
struct Ponto
{
	// Definindo os campos da struct
	int x, y; 
}; // Fim da struct

// Definindo o cabe�alho das fun��es secund�rias
float calcula_distancia(Ponto []);

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiros
	setlocale(LC_ALL, "portuguese");
	
	// Definindo um novo tipo na struct
	Ponto valores[2];
	
	// Informa sobre a finalidade do programa
	cout << "Programa que calcula a dist�ncia entre dois pontos." << endl << endl;
	
	// Estrutura de repeti��o para recebimento dos dados no vetor valores
	for(int i = 0; i < 2; i++)
	{
		// Fluxo de entrada e sa�da de dados
		cout << "Insira a coordenada x do " << i + 1 << "� ponto: ";
		cin >> valores[i].x;
		cout << "Insira a coordenada y do " << i + 1 << "� ponto: ";
		cin >> valores[i].y;
		
	}
	
	// Define uma precis�o de duas casas decimais ap�s a virgula
	cout << fixed << setprecision(2);
	// Chama a fun��o que calcula a dist�ncia entre os dois pontos
	cout << "A dist�ncia entre os dois pontos �: " << calcula_distancia(valores) << endl;
	
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal

// Fun��o secund�ria que calcula a dist�ncia entre dois pontos
float calcula_distancia(Ponto valores[])
{
	// Definindo uma vari�vel local da fun��o
	float resultado;
	
	// Calculando a dist�ncia euclidiana entre dois pontos
	resultado = sqrt(pow(valores[1].x - valores[0].x, 2) + pow(valores[1].y - valores[0].y, 2));
	
	// Fun��o retorna o resultado da dist�ncia euclidiana
	return resultado;
} // Fim da fun��o secund�ria