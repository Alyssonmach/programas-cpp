// Programa gerenciador de estoque em produto - mainProduto.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 20
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <string>
#include <iomanip>

using namespace std;

// cabeçalho das classes implementadas
#include "Produto.cpp"
#include "PlayStation.cpp"
#include "Xbox.cpp"

// cabeçalho das funções
void visualiza_dados1(class PlayStation, int);
void visualiza_dados2(class Xbox, int);

// função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	int estoque_atual1, estoque_atual2;
	
	cout << fixed << setprecision(2);
	
	// instâncias ou objetos da classe
	PlayStation console1(5000, 40, "PlayStation 5", 0.2);
	Xbox console2(4000, 55, "Xbox One", 0.3);
	
	cout << "Informe a quantidade atual de produtos em estoque do PlayStation 5: ";
	cin >> estoque_atual1;
	
	cout << "Informe a quantidade atual de produtos em estoque do Xbox One: ";
	cin >> estoque_atual2;
	
	cout << endl << endl;
	visualiza_dados1(console1, estoque_atual1);
	cout << endl << endl;
	visualiza_dados2(console2, estoque_atual2);
	
	return 0;
}

// função que retorna os dados dos objetos da classe PlayStation
void visualiza_dados1(PlayStation aux, int estoque_atual)
{
	cout << "Nome do Produto: " << aux.getNome() << endl;
	cout << "Preço original do Produto: " << aux.getPreco() << " R$" << endl;
	cout << "Estoque limite: " << aux.getEstoque() << " Produtos" << endl;
	cout << "Estoque atual: " << estoque_atual << " Produtos" << endl;
	cout << "Porcentagem de Desconto Possível: " << aux.getDesconto() * 100 << "%" << endl;
	if(aux.verificaDesconto(estoque_atual) == true)
	{
		cout << "O desconto será aplicado ao produto" << endl;
	} 
	else
	{
		cout << "O desconto não será aplicado ao produto" << endl;
	}
	cout << "Preço atual do Produto: " << aux.getPrecoAtual(estoque_atual) << " R$" << endl;
	
}

// função que retorna os dados dos objetos da classe Xbox
void visualiza_dados2(Xbox aux, int estoque_atual)
{
	cout << "Nome do Produto: " << aux.getNome() << endl;
	cout << "Preço original do Produto: " << aux.getPreco() << " R$" << endl;
	cout << "Estoque limite: " << aux.getEstoque() << " Produtos" << endl;
	cout << "Estoque atual: " << estoque_atual << " Produtos" << endl;
	cout << "Porcentagem de Desconto Possível: " << aux.getDesconto() * 100 << "%" << endl;
	if(aux.verificaDesconto(estoque_atual) == true)
	{
		cout << "O desconto será aplicado ao produto" << endl;
	} 
	else
	{
		cout << "O desconto não será aplicado ao produto" << endl;
	}
	cout << "Preço atual do Produto: " << aux.getPrecoAtual(estoque_atual) << " R$" << endl;
}