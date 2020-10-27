#include "Ponto.h" 

Ponto::Ponto(int x, int y){       // construtor da classe       
	this->x= x>0?x:0; 
	 this->y= y>0?y:0;
}
void Ponto::setX(int x){ 
	 this->x= x>0?x:0;                                      
}
int Ponto :: getX() const{
	return x;
}
void Ponto :: setY(int y){       
	 this->y= y>0?y:0;                                      
}
int Ponto:: getY() const {
	return y;
}
void Ponto::imprime() const{
	cout<<"x = "<< getX()<<endl;
	cout<<"y = "<<getY()<<endl;
}
