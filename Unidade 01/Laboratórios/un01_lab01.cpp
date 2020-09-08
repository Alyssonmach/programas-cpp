// Usando uma struct para definir a distância entre dois pontos - un01_lab01.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca de localização de arquivos
#include <locale>
// Biblioteca para manipulação de dados
#include <iomanip>

#include <cmath>

// Acessa as funções das bibliotecas padrão
using namespace std;

// Definindo uma struct
struct Ponto
{
	// Definindo os campos da struct
	int x, y; 
}; // Fim da struct

// Definindo o cabeçalho das funções secundárias
float calcula_distancia(Ponto []);

// Função principal do programa
int main(void)
{
	// Configurando o idioma brasileiros
	setlocale(LC_ALL, "portuguese");
	
	// Definindo um novo tipo na struct
	Ponto valores[2];
	
	// Informa sobre a finalidade do programa
	cout << "Programa que calcula a distância entre dois pontos." << endl << endl;
	
	// Estrutura de repetição para recebimento dos dados no vetor valores
	for(int i = 0; i < 2; i++)
	{
		// Fluxo de entrada e saída de dados
		cout << "Insira a coordenada x do " << i + 1 << "º ponto: ";
		cin >> valores[i].x;
		cout << "Insira a coordenada y do " << i + 1 << "º ponto: ";
		cin >> valores[i].y;
		
	}
	
	// Define uma precisão de duas casas decimais após a virgula
	cout << fixed << setprecision(2);
	// Chama a função que calcula a distância entre os dois pontos
	cout << "A distância entre os dois pontos é: " << calcula_distancia(valores) << endl;
	
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal

// Função secundária que calcula a distância entre dois pontos
float calcula_distancia(Ponto valores[])
{
	// Definindo uma variável local da função
	float resultado;
	
	// Calculando a distância euclidiana entre dois pontos
	resultado = sqrt(pow(valores[1].x - valores[0].x, 2) + pow(valores[1].y - valores[0].y, 2));
	
	// Função retorna o resultado da distância euclidiana
	return resultado;
} // Fim da função secundária