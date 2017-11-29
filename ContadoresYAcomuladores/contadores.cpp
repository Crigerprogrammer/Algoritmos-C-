#include <iostream>

using namespace std;

int main(){

    int contador=0,acumulador;

    while(contador<=10){
        cout<<contador<<endl;
        contador++;
        acumulador = acumulador + contador;
    }
    cout<<"Contador "<<contador<<endl;
    cout<<"El valor de acumulador es "<<acumulador<<endl;

    return 0;
}
