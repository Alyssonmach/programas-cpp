// Criando uma struct - un01_ex04.cpp

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca para manipulação de strings - un01_ex04.cpp
#include <string>
// Biblioteca padrão de localização de arquivos
#include <locale>

// Usa funções da biblioteca padrão
using namespace std;

// Definindo uma struct
struct Aluno
{
	string nome;
	string curso;
	long int matricula;
	float cra;
}; // Fim da struct

// Função principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as variáveis da struct
	Aluno alysson;
	Aluno *apont;
	
	// Modificando as variáveis da struct
	alysson.nome = "Alysson Machado";
	alysson.curso = "Engenharia Elétrica";
	alysson.matricula = 112344567;
	alysson.cra = 7.89;
	
	// Impressão de dados na tela
	cout << "Os dados são: " << endl;
	cout << "Nome: " << alysson.nome << endl;
	cout << "Curso: " << alysson.curso << endl;
	cout << "Matrícula: " << alysson.matricula << endl;
	cout << "CRA: " << alysson.cra << endl;
	
	// Definindo a variável de memória na qual o ponteiro aponta
	apont = &alysson;
	
	// Modificando a variável da struct com um ponteiro
	apont -> cra = 9.00;
	
	cout << "O novo CRA é: " << alysson.cra << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da função principal