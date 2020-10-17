#ifndef HORARIO_H
#define HORARIO_H

class Horario{
public:
   Horario( int = 0, int = 0, int = 0 ); 
   void setHorario( int, int, int ); 
   void setHour( int ); 
   void setMinute( int ); 
   void setSecond( int ); 
   int getHour() const; // funções get (normalmente declaradas const)
   int getMinute() const; 
   int getSecond() const; 
   void printUniversal() const; // funções print (normalmente declaradas const)
   void printStandard(); //não-const??
private:
   int hour; // 0 - 23 
   int minute; // 0 - 59
   int second; // 0 - 59
}; 
#endif