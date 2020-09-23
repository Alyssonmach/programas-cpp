#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

// Definindo uma classe elevador
class Elevador
{
	// Modificador de acesso private
	private:
		// Membros de dados da classe
		int capacidadeTotal, capacidadeAtual, andarTotal, andarAtual;
    // Modificador de acesso public
	public:
		// Construtor com parâmetros da classe
		Elevador(int, int);
		// Membros de funções da classe
		void entra(void);
		void sai(void);
		void sobe(void);
		void desce(void);
		void setCapacidadeAtual(int);
		void setAndarAtual(int);
		int getCapacidadeAtual(void);
		int getAndarAtual(void);
		int getCapacidadeTotal(void);
		int getAndarTotal(void);
}; // Fim da classe elevador

// Implementação do construtor com parâmetros da classe
Elevador::Elevador(int capacidade, int total)
{
	capacidadeTotal = capacidade;
	capacidadeAtual = 0;
	andarTotal = total;
	andarAtual = 0;
}

// Definindo so métodos dos membros de funções da classe

// Membro da classe responsável por adicionar um usuário ao elevador
void Elevador::entra(void)
{
	setCapacidadeAtual((getCapacidadeAtual() + 1) <= getCapacidadeTotal() ? (getCapacidadeAtual() + 1) : getCapacidadeAtual());
}

// Membro da classe responsável por remover um usuário do elevador
void Elevador::sai(void)
{
	setCapacidadeAtual((getCapacidadeAtual() - 1) >= 0 ? (getCapacidadeAtual() - 1) : getCapacidadeAtual());
}

// Membro da classe responsável por subir com o elevador
void Elevador::sobe(void)
{
	setAndarAtual((getAndarAtual() + 1) <= getAndarTotal() ? (getAndarAtual() + 1) : getAndarAtual());
}

// Membro da classe responsável por descer o elevador
void Elevador::desce(void)
{
	setAndarAtual((getAndarAtual() - 1) >= 0 ? (getAndarAtual() - 1) : getAndarAtual());
}

// Membro da classe responsável por atribuir número atual de pessoas no elevador
void Elevador::setCapacidadeAtual(int capacidade)
{
	capacidadeAtual = capacidade;
}

// Membro da classe responsável por atribuir andar atual
void Elevador::setAndarAtual(int andar)
{
	andarAtual = andar;
}

// Membro da classe responsável por retornar capacidade atual de pessoas
int Elevador::getCapacidadeAtual(void)
{
	return capacidadeAtual;
}

// Membro da classe responsável por retornar andar atual do prédio 
int Elevador::getAndarAtual(void)
{
	return andarAtual;
}

// Membro da classe responsável por retornar a capacidade total do elevador
int Elevador::getCapacidadeTotal(void)
{
	return capacidadeTotal;
}

// Membro da classe responsável por retornar o total de andares do prédio
int Elevador::getAndarTotal(void)
{
	return andarTotal;
}

// Cabeçalho das funções 
void menu(class Elevador);
void mostraDados(class Elevador);

// Função principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Instância ou objeto da classe
	Elevador elevador_empresarial(10, 15);
	
	menu(elevador_empresarial);
	
	return 0;
}

// Implementação do menu do programa
void menu(Elevador elevador1)
{
	int opcao;
	
	do
	{
		cout << " Programa Sistema de Elevador" << endl << endl;
		
		mostraDados(elevador1);
		
		cout << "1 -> Entrada de uma pessoa no elevador." << endl;
		cout << "2 -> Saída de uma pessoa no elevador." << endl;
		cout << "3 -> Subir um andar no elevador." << endl;
		cout << "4 -> Descer um andar no elevador." << endl;
		cout << "5 -> Encerrar processo do elevador." << endl;
		cout << "Opção: ";
		cin >> opcao;
		
		switch(opcao)
		{
		case 1:
			elevador1.entra();
			break;
		case 2:
			elevador1.sai();
			break;
		case 3:
			elevador1.sobe();
			break;
		case 4:
			elevador1.desce();
			break;
		case 5:
			cout << "Desligando elevador..." << endl;
			break;
		default:
			cout << "Valor incorreto, insira novamente!" << endl;
			break;
		}  
		
		system("pause");
		system("cls");
		
	}while(opcao != 5);
}

// Mostra a saída dos dados do objeto
void mostraDados(Elevador elevador1)
{
	cout << "Capacidade total de pessoas no elevador: " << elevador1.getCapacidadeTotal() << endl;
	cout << "Capacidade total de andares no prédio: " << elevador1.getAndarTotal() << endl << endl;
	cout << "Número atual de pessoas no elevador: " << elevador1.getCapacidadeAtual() << endl;
	cout << "Andar atual do prédio: " << elevador1.getAndarAtual() << endl << endl;
}