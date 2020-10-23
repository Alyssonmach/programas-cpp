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
	float impostos = 0;
	
	// Instâncias ou objetos da classe
	MedioPorte empresa_media(" ", 0, 0.0);
	PequenoPorte empresa_pequena(" ", 0, 0.0, false);
	
	do
	{
		
		cout << "=== Programa Tributação de Impostos em Empresas ===" << endl << endl;
		
		cout << "Escolha uma opção:" << endl;
		cout << "1 - Cadastrar Tributação Bruta de Impostos;" << endl;
		cout << "2 - Cadastrar Média Empresa;" << endl;
		cout << "3 - Visualizar dados da Média Empresa;" << endl;
		cout << "4 - Cadastrar Pequena Empresa;" << endl;
		cout << "5 - Visualizar dados da Pequena Empresa;" << endl;
		cout << "6 - Sair do Programa;" << endl << endl;
		cout << "Informe sua opcao: ";
		cin >> opcao;
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
		if(opcao == 1)
		{
			cout << "Informe a tributação bruta de impostos das empresas: ";
			cin >> impostos;
			
			empresa_media.setImpostos(impostos);
			empresa_pequena.setImpostos(impostos);
		}
		else if(opcao == 2 || opcao == 4)
		{
			cin.ignore();
			cout << "Informe o nome da empresa: ";
			getline(cin, nome);
			cout << "Informe o CGC da empresa: ";
			cin >> cgc;
			
			if(opcao == 2)
			{
				MedioPorte aux(nome, cgc, impostos);
				empresa_media = aux;
			}
			else
			{
				int opcao_aux;
				
				cout << "A empresa está cadastrada no SIMPLES?" << endl;
				cout << "1 - sim;" << endl;
				cout << "2 - não;" << endl;
				cout << "Escolha sua opção: ";
				cin >> opcao_aux;
				
				if(opcao_aux == 1)
				{
					PequenoPorte aux(nome, cgc, impostos, true);
					empresa_pequena = aux;
				}
				else 
				{
                    PequenoPorte aux(nome, cgc, impostos, false);
                    empresa_pequena = aux;
				}
					
			}
		}
		else if(opcao == 3 || opcao == 5)
		{
			if(opcao == 3)
				visualizaMediaEmpresa(empresa_media);
			else 
				visualizaPequenaEmpresa(empresa_pequena);
		}
		else if(opcao == 6)
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
		
	}while(opcao != 6);
	
	return 0;
}

// função que imprime os dados da media empresa
void visualizaMediaEmpresa(MedioPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos: " << aux.getImpostos() << " R$" << endl;
}

// função que imprime os dados da pequena empresa
void visualizaPequenaEmpresa(PequenoPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos: " << aux.getImpostos() << " R$" << endl;
	cout << "Cadastro no SIMPLES: " << aux.getSIMPLES() << endl;
}