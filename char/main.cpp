#include <iostream>

using namespace std;

int main()
{
   /******TIPO CHAR*******/
   char letra = 65;
   cout << letra << endl;
   /*****TIPO INT******/
   /** PESO EN BYTES = 4(varia)
        N de valores = 2^32
    */
    int numero = -1;
    unsigned int numero2 = -100;
    cout << numero << endl;
    cout << numero2 << endl;

    /**** Cuanto ocupa en la memoria los valores (int, double, float, char, bool ***/

    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;

}
