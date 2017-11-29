#include <iostream>

using namespace std;

int main()
{
   /**OPERADORES LOGICOS**/
   //&& Solo si los dos son verdaderos
   bool r1 = true & false;
   //|| Solo si uno es verdadero todo es verdadero
   bool r2 = true || false;
   // ! Negara
    cout<< r1 << endl;
    cout<< r2 <<endl;
   /**OPERADORES COMPARATIVOS**/
   // == iGUALDAD
   bool r3 = 5 == 3;
   //  != Diferente
   bool r4 = 10 != 90;
   // < Menor
   bool r5 = 10 < 10;
   // > Mayot
   bool r6 = 10 > 9;
   // <=
   bool r7 = 10 <= 10;
   // >=
   bool r8 = 80 >= 100;

    cout<<r3<<endl;
    cout<<r4<<endl;
    cout<<r5<<endl;
    cout<<r6<<endl;
    cout<<r7<<endl;
    cout<<r8<<endl;

}
