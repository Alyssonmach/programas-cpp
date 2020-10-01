// Utilizando o ponteiro this para referenciar membros do objeto

#include <locale>
#include <iostream>

using namespace std;

class Test {
  public:
     Test( int = 0 ); 
     void print() const;
  private:
     int x;
}; 
Test::Test( int value ) : x( value ) { // inicializa x como value
   // corpo vazio
}
void Test::print() const   { // utiliza implicitamente o ponteiro this para acessar x
   cout << "        x = " << x;                                    
   // utiliza explicitamente o ponteiro this e o operador seta para acessar o membro x
   cout <<endl<< "this->x = " << this->x;                      
   // utiliza explicitamente o ponteiro this desreferenciado e o operador ponto para acessar x 
cout <<endl<< "(*this).x = " << ( *this ).x << endl;          
}
int main() {
   Test testObject( 12 ); // instancia e inicializa testObject
   testObject.print();
   return 0;
}