// Figura 3.5: fig02_05.cpp
// Define a classe GradeBook que possui um membro de dados courseName
// e funções-membro para configurar e obter o seu valor;
// Cria e manipula um objeto GradeBook com essas funções.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> // O programa utiliza classe de string padrão C++

using std::string;
using std::getline;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// Função que configura o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da função setCourseName
		
		// Função que obtém o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna o courseName do objeto
		} // Fim da função getCourseName
		
		
		// Função que exibe uma mensage de boas vindas
		void displayMessage()
		{
			// Essa instrução chama getCourseName para obter o nome do curso
			// que esse GradeBook representa
			cout << "Welcome to the GradeBook for\n" << getCourseName() << "!"
			<< endl;
			
		} // Fim da função displayMessage
		
	private:
		string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook

// A função main inicia a execução do programa
int main()
{
	string nameOfCourse; // Strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	// Exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
	
	// solicita, insere e configura o nome do curso
	cout << "\nPlease enter the course name: ";
	getline(cin, nameOfCourse); // Lê o nome de um curso com espaços em branco
	myGradeBook.setCourseName(nameOfCourse); // Configura o nome do curso
	
	cout << endl; // Gera saída de uma linha em branco
	
	myGradeBook.displayMessage(); // Exibe a mensagem com o novo nome do curso
	
	return 0; // Indica terminação bem-sucedida
} // Fim da main



