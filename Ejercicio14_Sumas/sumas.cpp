#include <iostream>

using namespace std;

int main(){

    //Programa para sumar numeros y se quiebra el bucle cuando este ingresa un numero negativo
    float numero,suma=0;


    do{
        cout<<"Numero: ";
        cin>>numero;
        //Condicional, cuando coloque un negativo se cerrara el bucle
        if(numero >= 0){
            suma = suma+numero;
        }
    }while(numero>=0);
    cout<<"Total: "<<suma<<endl;

    return 0;
}
