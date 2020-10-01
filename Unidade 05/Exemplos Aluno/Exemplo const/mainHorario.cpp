#include <iostream>
#include "Horario.cpp"

using namespace std;

int main() {
   Horario wakeUp( 6, 45, 0 ); // objeto não-constante
   const Horario noon( 12, 0, 0 ); // objeto constante
                                          // OBJETO      FUNÇÃO MEMBRO 
   wakeUp.setHour( 18 );  // não-const        não-const
   noon.setHour( 12 );       // const               não-const
   
   wakeUp.getHour();        // não-const           const
   noon.getMinute();         // const                  const

   wakeUp.printUniversal();// não-const        const
   noon.printUniversal();   // const                 const
   
   wakeUp.printStandard();// não-const       non-const   
   noon.printStandard();    // const               não-const
   return 0;
}