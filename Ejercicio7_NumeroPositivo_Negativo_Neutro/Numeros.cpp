#include <iostream>

using namespace std;

int main(){
    /**Escriba un programa que diga si un numero entero
    es positivo, negativo o neutro**/
    int numero;
    cout<<"Ingrese el numero: ";
    cin>>numero;

    if(numero>0){
        cout<<"El numero es positivo"<<endl;
    }
    else if (numero < 0){
        cout<<"El numero es negativo"<<endl;
    }
    else{
        cout<<"El numero es neutro"<<endl;
    }
    return 0;
}
