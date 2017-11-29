#include <iostream>

using namespace std;

int main()
{
    /** PRECEDENCIA ARITMETICA **/
    /**Aqui aprenderemos como opera el lenguaje de programacion dependiendo los parentesis o del operador **/
    cout<<14-8/2*3+1<<endl; //Aca no existe ningun parentesis
    cout<<(14-8)/2*3+1<<endl; //Primero se opera lo que esta dentro de los parentesis
    cout<<14-(8/2 *3)+1<<endl; //Aca de igual forma se operara lo que esta dentro de los aprentesis
    cout<<14-8/2*(3+1)<<endl;
    cout<<(14-8)/2*(3+1)<<endl;
    return 0;
}
