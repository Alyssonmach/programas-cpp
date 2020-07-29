// Figura 3.3: fig03_03.cpp
// Define a classe GradeBook com uma função-membro que aceita um parâmetro;
// Cria um objeto GradeBook e chama sua função-membro displayMessage.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> // O programa utiliza a classe string padrão do C++

using std::string;
using std::getline;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// Função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
		void displayMessage(string courseName)
		{
			cout << "Welcome to the GradeBook for\n" << courseName << "!" << 
			endl;
			
		} // Fim da função display Message
}; // Fim da classe GradeBook

// A função main inicia a execução do programa
int main()
{
	string nameOfCourse; // Strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	// prompt para a entrada do nome do curso
	cout << "Please enter the course name: ";
	getline(cin, nameOfCourse); // Lê o nome de um curso com espaços em branco
	cout << endl; // Gera saída de uma linha em branco;
	
	// Chama a função displayMessage de myGradeBook
	// e passa nameOfCourse como arguemento
	myGradeBook.displayMessage(nameOfCourse);
	
	return 0; // Indica terminação bem-sucedida
} // Fim da main