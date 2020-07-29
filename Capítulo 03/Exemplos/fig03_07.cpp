// Figura 3.7: fig03_07.cpp
// Instanciando múltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado
#include <iostream>

using std::cout;
using std::endl;

#include <string> // O programa utiliza classe de string padrão C++

using std::string;

// Definição da classe GradeBook
class GradeBook
{
	public:
		// O construtor inicializa courseName com a string fornecida como argumento
		GradeBook(string name)
		{
			setCourseName(name); // Chama a função set para inicializar courseName
		} // Fim do construtor GradeBook
		
		// Função para configurar o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da função setCourseName
		
		// Função para obter o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna courseName do objeto
		} // Fim da função getCourseName
		
		// Exibe uma mensage de boas vindas para o usuário do GradeBook
		void displayMessage()
		{
			// Chama getCourseName para obter courseName
			cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
		} // Fim da função displayMessage
		
		private:
			string courseName; // Nome do curso para esse GradeBook
};  // Fim da classe GradeBook

// A função main inicia a execução do programa
int main()
{
	// cria dois objetos GradeBook
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");
	
	// Exibe o valor inicial de courseName para cada objeto GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName();
	cout << "\ngradeBook2 created for course: " << gradeBook2.getCourseName();
	cout << endl; // Imprime uma linha em branco
	   
	return 0; // Indica terminação bem-sucedida
} // Fim da função main

