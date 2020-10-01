#include "Horario.h"
#include <iostream>
#include <iomanip>

using namespace std;

Horario::Horario(int hour, int minute, int second) { 
   setHorario(hour, minute, second); 
} 
void Horario::setHorario( int hour, int minute, int second ) {
   setHour( hour );
   setMinute( minute );
   setSecond( second );
} 
void Horario::setHour( int h ) {
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
} 
void Horario::setMinute( int m ) { 
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
} 
void Horario::setSecond( int s ) { 
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
} 
int Horario::getHour() const { // funções get devem ser const
   return hour; 
} 
int Horario::getMinute() const {
   return minute; 
} 
int Horario::getSecond() const { 
   return second;
} 
void Horario::printUniversal() const { // funções print também
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} 
void Horario::printStandard() { // note a falta da declaração const
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << minute
      << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} 
