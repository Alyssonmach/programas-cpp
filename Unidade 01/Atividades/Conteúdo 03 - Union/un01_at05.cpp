// Analisando maior bloco de memória de armazenamento e uma union - in01_at05.cpp

// Biblioteca de entrada e saída de dados
#include <iostream>
// Biblioteca para localização de arquivos
#include <locale>

// Acessa as funções da biblioteca padrão
using namespace std;

// Definindo uma struct
struct ss
{
	char a[10];
	int b;
} v;

// Definindo uma union
union uu
{
	char a[10];
	int b;
} t;

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Armazenando valores na struct e na union
	v.b = 10;
	t.b = 10;
	
	// Informando a finalidade do programa
	cout << "Programa que mostra a diferneça em bytes de uma struct e uma union." << endl << endl;
	
	// Analisando o espaço de armazenamento da struct e da union
	cout << "Bytes armazenados na struct: " << sizeof(v) << endl;
	cout << "Bytes armazenados na union: " << sizeof(t) << endl;
		
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função main