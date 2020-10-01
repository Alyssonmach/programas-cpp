#include <iostream>
#include <locale>

using namespace std;

class Circulo {
		float r;
		const float pi;
	public :
		Circulo();
		Circulo(float, float);
		void setRaio(float);
		void setPi(float);
		float calculaArea();
};
Circulo :: Circulo(): r(1), pi(3.14){			
}
Circulo :: Circulo(float raio, float valorPi): r(raio), pi(valorPi) { 
}
float Circulo::calculaArea(){
	return pi*r*r;
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	Circulo umCirculo;
	Circulo outroCirculo(3, 3.14159);
	cout<<"A área de umCirculo é: "<<umCirculo.calculaArea() <<endl;
	cout<<"A área de outroCirculo é: "<<outroCirculo.calculaArea()<<endl;
}
