// Programa de tributação de impostos em empresas - mainImpostos.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matrícula: 119110236
// Técnicas de Programação (C++) - Salerno
// Unidade 06 - Laboratório 18
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

// cabeçalho das classes definidas
#include "Empresa.cpp"
#include "MedioPorte.cpp"
#include "PequenoPorte.cpp"

// cabeçalho das funções auxiliares
void visualizaMediaEmpresa(class MedioPorte);
void visualizaPequenaEmpresa(class PequenoPorte);

// função principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	
	string nome;
	int opcao;
	long int cgc;
	float faturamento;
	
	// Instâncias ou objetos da classe
	MedioPorte empresa_media(" ", 0, 0.0);
	PequenoPorte empresa_pequena(" ", 0, 0.0, false);
	
	do
	{
		
		cout << "=== Programa Tributação de Impostos em Empresas ===" << endl << endl;
		
		cout << "Escolha uma opção:" << endl;
		cout << "1 - Cadastrar Média Empresa;" << endl;
		cout << "2 - Visualizar dados da Média Empresa;" << endl;
		cout << "3 - Cadastrar Pequena Empresa;" << endl;
		cout << "4 - Visualizar dados da Pequena Empresa;" << endl;
		cout << "5 - Sair do Programa;" << endl << endl;
		cout << "Informe sua opcao: ";
		cin >> opcao;
		
		cout << endl << endl;
		system("pause");
		system("cls");	
		
		if(opcao == 1 || opcao == 3)
		{
			cin.ignore();
			cout << "Informe o nome da empresa: ";
			getline(cin, nome);
			cout << "Informe o CGC da empresa: ";
			cin >> cgc;
			
			if(opcao == 1)
			{
				cout << "Informe o faturamento da empresa: ";
				cin >> faturamento;
				
				MedioPorte aux(nome, cgc, faturamento, 0.17);
				empresa_media = aux;
			}
			else
			{
				int opcao_aux;
				
				cout << "Informe o faturamento da empresa: ";
				cin >> faturamento;
				
				cout << "A empresa está cadastrada no SIMPLES?" << endl;
				cout << "1 - sim;" << endl;
				cout << "2 - não;" << endl;
				cout << "Escolha sua opção: ";
				cin >> opcao_aux;
				
				if(opcao_aux == 1)
				{
					PequenoPorte aux(nome, cgc, faturamento, 0.17, true);
					empresa_pequena = aux;
				}
				else 
				{
                    PequenoPorte aux(nome, cgc, faturamento, 0.17, false);
                    empresa_pequena = aux;
				}
					
			}
		}
		else if(opcao == 2 || opcao == 4)
		{
			if(opcao == 2)
				visualizaMediaEmpresa(empresa_media);
			else 
				visualizaPequenaEmpresa(empresa_pequena);
		}
		else if(opcao == 5)
		{
			cout << "Saindo do programa." << endl << endl;
		}
		else 
		{
            cout << "Entrada Inválida. Tente novamente." << endl << endl;	
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
	}while(opcao != 5);
	
	return 0;
}

// função que imprime os dados da media empresa
void visualizaMediaEmpresa(MedioPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos a serem pagos: " << aux.getImpostos() << " R$" << endl;
	cout << "Faturamento Bruto da Empresa: " << aux.getFaturamento() << " R$" << endl;
	cout << "Faturamento Líquido da Empresa: " << aux.getFaturamento() - aux.getImpostos() << " R$" << endl;
}

// função que imprime os dados da pequena empresa
void visualizaPequenaEmpresa(PequenoPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos a serem pagos: " << aux.getImpostos() << " R$" << endl;
	cout << "Cadastro no SIMPLES: " << aux.getSIMPLES() << endl;
	cout << "Faturamento Bruto da Empresa: " << aux.getFaturamento() << " R$" << endl;
	cout << "Faturamento Líquido da Empresa: " << aux.getFaturamento() - aux.getImpostos() << " R$" << endl;
}