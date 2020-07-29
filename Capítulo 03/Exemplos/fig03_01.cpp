// Figura 3.1: fig03_01.cpp
// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.
#include <iostream>

using std::cout;
using std::endl;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// Função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
		void displayMessage()
		{
			cout << "Welcome to the GradeBook!" << endl;
		} // Fim da função displayMessage
}; // Fim da classe GradeBook

int main()
{
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	myGradeBook.displayMessage(); // Chama a função displayMessage do objeto
	
	return 0; // Indica terminação bem sucedida
} // Fim da main