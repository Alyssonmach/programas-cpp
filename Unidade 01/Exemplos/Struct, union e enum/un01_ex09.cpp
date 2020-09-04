// Exemplo de uso de enum - un01_ex09.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Acessa as funções das bibliotecas padrão
using namespace std;

// Criando a enumeração
enum booleano
{
	v = 1, f = 0
}; // Fim da enumeração

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Define que b recebe v
	booleano b = v;
	
	// Caso b seja verdadeiro
	if(b)
	{
		// Atribui f a b
		b = f;
	}
	
	// Imprime na saída de dados do usuário
	cout << "b equivale a: " << b << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim do programa principal