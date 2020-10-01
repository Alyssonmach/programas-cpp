// Demonstração da possibilidade de atribuição de objetos de uma classe,
// a partir do uso da atribuição default de membros.
   #include <iostream>

   using namespace std;

   class Data {

	public:
		Data( int = 1, int = 1, int = 2020 ); // construtor default
		void imprime();
	private:
		int dia; 
		int mes;
		int ano;
   }; 

   // construtor Data sem verificação de faixa
	Data::Data( int d, int m, int a ) {
		dia = d; 
		mes = m;
		ano = a;
	}

	// impressão de Data no formato dd/mm/aa
	void Data::imprime() 
	{ 
		cout << dia << "/" << mes << "/" << ano; 
	}
	
	int main() {
	Data data1( 29, 9, 2020 );
	Data data2;  // data2 default: 1/1/2020	// impressão de data1 e data2
	cout << "Data 1 = ";
	data1.imprime();
	cout <<endl<< "Data 2 = ";
	data2.imprime();
	data2 = data1;   // atribuição default de membro
	cout << endl<< "Apos a atribuicao default de membro, Data 2 = ";
	data2.imprime();
	cout << endl;
	return 0;
      }