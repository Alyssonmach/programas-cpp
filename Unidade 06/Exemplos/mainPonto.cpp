#include <iostream>
#include <locale.h>
using namespace std;
#include "Ponto.cpp"

int main(){   
	setlocale(LC_ALL,"");
	Ponto ponto1(72,15);  // instancia objeto Ponto

   cout<<"X = "<< ponto1.getX() <<endl<< "Y = "  << ponto1. getY() ;
	ponto1.setX(10); 
	ponto1.setY(10); 
	cout << endl<<"O novo local do ponto é ";
	cout<<"("<< ponto1.getX() << ", "<< ponto1.getY() <<")" << endl;
	
	return 0;
}
