// Programa de conversão de temperaturas - un01_lab03.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca de localização de arquivos
#include <locale>
// Biblioteca para manipulação de dados
#include <iomanip>

// Acessa as funções da biblioteca padrão
using namespace std;

// Definindo uma union
union Temperaturas
{
	// Definindo os campos da union
	float celsius, fahrenheint;
}; // Fim da union

// Definindo os cabeçalhos das funções secundárias
float celsius_fahrenheint(Temperaturas);
float fahrenheint_celsisus(Temperaturas);

// Definindo a função principal
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando um novo tipo da union
	Temperaturas valores;
	
	// Inicializando variáveis locais
	int opcao;
	
	// Informa ao usuário a função do programa
	cout << "Programa conversor de temperaturas." << endl << endl;
	
	// Define uma precisão de duas casas decimais
	cout << fixed << setprecision(2);
	
	// Criando um menu de opções para o usuário
	cout << "Escolha uma opção de conversão:" << endl;
	cout << "1 - Celsius para Fahrenheint" << endl;
	cout << "2 - Fahrenheint para Celsius" << endl << endl;
	
	// Estrutura de repetição para receber os dados corretos do usuário
	do
	{
		// Recebe a opção informada pelo usuário
		cout << "Opção:";
		cin >> opcao;
		
		// Caso a entrada seja incorreta...
		if(opcao < 1 || opcao > 2)
		{
			// Informa uma mensagem de aviso ao usuário
			cout << "Valor incorreto. Por favor tente novamente." << endl;
		} // Fim da estrutura de condição
	}while(opcao < 1 || opcao > 2); // Fim da estrutura de repetição
	
	// Quebra de linha
	cout << endl;
	
	// Caso opção seja 1...
	if(opcao == 1)
	{	// Recebe a temperatura em celsius do usuário
		cout << "Informe a temperatura em celsius: ";
		cin >> valores.celsius;
		
		// Chamando a função que converte a temperatura
		cout << "Fahrenheint: " << celsius_fahrenheint(valores) << " F." << endl;
	}
	// Se não
	else
	{
		// Recebe a temperatura em fahrenheint do usuário
		cout << "Informe a temperatura em fahrenheint: ";
		cin >> valores.fahrenheint;
		
		// Chamando a função que converte a temperatura
		cout << "Celsisus: " << fahrenheint_celsisus(valores) << "º C." << endl;
	} // Fim da estrutura de repetição
	
	// Indica que a função terminou com sucesso
	return 0;
} // Fim da função principal

// Função secundária que converte uma temperatura em celsius para fahrenheint
float celsius_fahrenheint(Temperaturas valores)
{
	// Incializando uma variável local
	float grau_fahrenheint;
	
	// Realiza a operação de conversão de temperaturas
	grau_fahrenheint = valores.celsius * (9.0 / 5.0) + 32.0;
	
	// Função retorna o valor calculado
	return grau_fahrenheint;
} // Fim da função secundária

// Função secundária que converte uma temperatura em fahrenheint para celsius
float fahrenheint_celsisus(Temperaturas valores)
{
	// Incializando uma variável local
	float grau_celsius;
 	
 	// Realiza a operação de conversão de temperaturas
 	grau_celsius = 5.0 * (valores.fahrenheint - 32.0) / 9.0;
 	
 	// Função retorna o valor calculado
	return grau_celsius;
} // Fim da função secundária