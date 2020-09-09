// Definindo uma classe pessoa - un02_ex01.cpp
// Usando construtor com parâmetros

// Biblioteca padrão de entrada e saída de dados
#include <iostream>
// Biblioteca de localização de arquivos
#include <locale>
// Biblioteca de uso com cadeias de caracteres
#include <string>

// Acessa as funções da biblioteca padrão
using namespace std;

// Definindo uma classe
class Pessoa
{
	// Definindo um especificador de acesso a membros private
	private:
		string nome; // Membro de Dado
		int idade; // Membro de Dado
	// Definindo um especificador de acesso a membros private
    public:
    	Pessoa(string, int); // Construtor com parâmetros
    	int getIdade(void); // Membro de função para obtenção de valores
    	string getNome(void); // Membro de função para obtenção de valores
    	void setIdade(int); // Membro de função para atribuição de valores
    	void setNome(string); // Membro de função para atribuição de valores
};

// Implementando o construtor da classe
Pessoa::Pessoa(string nome_pessoa, int idade_pessoa)
{
	nome = nome_pessoa;
	idade = idade_pessoa;
}

// Implementação dos métodos da classe
int Pessoa::getIdade(void)
{
	return idade;
}

// Implementação dos métodos da classe
string Pessoa::getNome(void)
{
	return nome;
}

// Implementação dos métodos da classe
void Pessoa::setIdade(int idade_pessoa)
{
	idade = idade_pessoa;
}

// Implementação dos métodos da classe
void Pessoa::setNome(string nome_pessoa)
{
	nome = nome_pessoa;
}

// Função principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	// Indica que o programa terminou com sucesso
	
	// Definindo um objeto ou instância de uma classe
	Pessoa pessoa1("nan", 0);
	
	int idade_pessoa;
	string nome_pessoa;
	
	cout << "Programa de Cadastro de Pessoas." << endl << endl;
	
	cout << "Insira seu nome: ";
	getline(cin, nome_pessoa);
	
	cout << "Insira a sua idade: ";
	cin >> idade_pessoa;
	
	pessoa1.setIdade(idade_pessoa);
	pessoa1.setNome(nome_pessoa);
	
	cout << "O Seu nome é " << pessoa1.getNome() << ". Você tem ";
	cout << pessoa1.getIdade() << " anos de idade." << endl; 
	
	
	return 0;
} // Fim da função principal