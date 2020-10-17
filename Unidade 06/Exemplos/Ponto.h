#ifndef PONTO_H
#define PONTO_H

class Ponto{
	protected:
		int x;   
		int y; 
	public:
		Ponto (int = 0, int = 0);
		void setX (int);
		int getX( ) const; 
		void setY(int); 
		int getY( ) const;
		void imprime() const;
};     
#endif
