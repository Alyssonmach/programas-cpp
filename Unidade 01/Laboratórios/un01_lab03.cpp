// Programa de convers�o de temperaturas - un01_lab03.cpp

// Unidade 01 - Laborat�rio de Programa��o 03

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca de localiza��o de arquivos
#include <locale>
// Biblioteca para manipula��o de dados
#include <iomanip>

// Acessa as fun��es da biblioteca padr�o
using namespace std;

// Definindo uma union
union Temperaturas
{
	// Definindo os campos da union
	float celsius, fahrenheint;
}; // Fim da union

// Definindo os cabe�alhos das fun��es secund�rias
float celsius_fahrenheint(Temperaturas);
float fahrenheint_celsisus(Temperaturas);

// Definindo a fun��o principal
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando um novo tipo da union
	Temperaturas valores;
	
	// Inicializando vari�veis locais
	int opcao;
	
	// Informa ao usu�rio a fun��o do programa
	cout << "Programa conversor de temperaturas." << endl << endl;
	
	// Define uma precis�o de duas casas decimais
	cout << fixed << setprecision(2);
	
	// Criando um menu de op��es para o usu�rio
	cout << "Escolha uma op��o de convers�o:" << endl;
	cout << "1 - Celsius para Fahrenheint" << endl;
	cout << "2 - Fahrenheint para Celsius" << endl << endl;
	
	// Estrutura de repeti��o para receber os dados corretos do usu�rio
	do
	{
		// Recebe a op��o informada pelo usu�rio
		cout << "Op��o:";
		cin >> opcao;
		
		// Caso a entrada seja incorreta...
		if(opcao < 1 || opcao > 2)
		{
			// Informa uma mensagem de aviso ao usu�rio
			cout << "Valor incorreto. Por favor tente novamente." << endl;
		} // Fim da estrutura de condi��o
	}while(opcao < 1 || opcao > 2); // Fim da estrutura de repeti��o
	
	// Quebra de linha
	cout << endl;
	
	// Caso op��o seja 1...
	if(opcao == 1)
	{	// Recebe a temperatura em celsius do usu�rio
		cout << "Informe a temperatura em celsius: ";
		cin >> valores.celsius;
		
		// Chamando a fun��o que converte a temperatura
		cout << "Fahrenheint: " << celsius_fahrenheint(valores) << " F." << endl;
	}
	// Se n�o
	else
	{
		// Recebe a temperatura em fahrenheint do usu�rio
		cout << "Informe a temperatura em fahrenheint: ";
		cin >> valores.fahrenheint;
		
		// Chamando a fun��o que converte a temperatura
		cout << "Celsisus: " << fahrenheint_celsisus(valores) << "� C." << endl;
	} // Fim da estrutura de repeti��o
	
	// Indica que a fun��o terminou com sucesso
	return 0;
} // Fim da fun��o principal

// Fun��o secund�ria que converte uma temperatura em celsius para fahrenheint
float celsius_fahrenheint(Temperaturas valores)
{
	// Incializando uma vari�vel local
	float grau_fahrenheint;
	
	// Realiza a opera��o de convers�o de temperaturas
	grau_fahrenheint = valores.celsius * (9.0 / 5.0) + 32.0;
	
	// Fun��o retorna o valor calculado
	return grau_fahrenheint;
} // Fim da fun��o secund�ria

// Fun��o secund�ria que converte uma temperatura em fahrenheint para celsius
float fahrenheint_celsisus(Temperaturas valores)
{
	// Incializando uma vari�vel local
	float grau_celsius;
 	
 	// Realiza a opera��o de convers�o de temperaturas
 	grau_celsius = 5.0 * (valores.fahrenheint - 32.0) / 9.0;
 	
 	// Fun��o retorna o valor calculado
	return grau_celsius;
} // Fim da fun��o secund�ria