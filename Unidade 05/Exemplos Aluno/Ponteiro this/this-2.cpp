// Utilizando o ponteiro this para verificar se o parâmetro passada é o mesmo objeto

#include <iostream>

using namespace std;

class A { 
      int x; 
  public:
     void setX(int a); 
     void sou_eu_mesmo( const A & ); 
}; 
void A::sou_eu_mesmo( const A &a ){ 
   if( this == &a ) 
	cout << "Sim, sou eu mesmo" << endl; 
   else
	cout << "Nao, nao sou eu" << endl; 
} 
int main() { 
     A a, b; 
     a.sou_eu_mesmo(b); 
     a.sou_eu_mesmo(a); 
}