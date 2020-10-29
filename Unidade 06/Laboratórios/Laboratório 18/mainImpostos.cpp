// Programa de tributa��o de impostos em empresas - mainImpostos.cpp

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

// cabe�alho das classes definidas
#include "Empresa.cpp"
#include "MedioPorte.cpp"
#include "PequenoPorte.cpp"

// cabe�alho das fun��es auxiliares
void visualizaMediaEmpresa(class MedioPorte);
void visualizaPequenaEmpresa(class PequenoPorte);

// fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	
	string nome;
	int opcao;
	long int cgc;
	float faturamento;
	
	// Inst�ncias ou objetos da classe
	MedioPorte empresa_media(" ", 0, 0.0);
	PequenoPorte empresa_pequena(" ", 0, 0.0, false);
	
	do
	{
		
		cout << "=== Programa Tributa��o de Impostos em Empresas ===" << endl << endl;
		
		cout << "Escolha uma op��o:" << endl;
		cout << "1 - Cadastrar M�dia Empresa;" << endl;
		cout << "2 - Visualizar dados da M�dia Empresa;" << endl;
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
				
				cout << "A empresa est� cadastrada no SIMPLES?" << endl;
				cout << "1 - sim;" << endl;
				cout << "2 - n�o;" << endl;
				cout << "Escolha sua op��o: ";
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
            cout << "Entrada Inv�lida. Tente novamente." << endl << endl;	
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
		
	}while(opcao != 5);
	
	return 0;
}

// fun��o que imprime os dados da media empresa
void visualizaMediaEmpresa(MedioPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos a serem pagos: " << aux.getImpostos() << " R$" << endl;
	cout << "Faturamento Bruto da Empresa: " << aux.getFaturamento() << " R$" << endl;
	cout << "Faturamento L�quido da Empresa: " << aux.getFaturamento() - aux.getImpostos() << " R$" << endl;
}

// fun��o que imprime os dados da pequena empresa
void visualizaPequenaEmpresa(PequenoPorte aux)
{
	cout << "Nome: " << aux.getNome() << endl;
	cout << "CGC: " << aux.getCGC() << endl;
	cout << "Impostos a serem pagos: " << aux.getImpostos() << " R$" << endl;
	cout << "Cadastro no SIMPLES: " << aux.getSIMPLES() << endl;
	cout << "Faturamento Bruto da Empresa: " << aux.getFaturamento() << " R$" << endl;
	cout << "Faturamento L�quido da Empresa: " << aux.getFaturamento() - aux.getImpostos() << " R$" << endl;
}