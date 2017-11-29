#include <iostream>

using namespace std;

int main(){
    int numero, contador=0;
    cout<<"Ingrese el numero: ";
    cin>>numero;
    do{
        numero = numero/10;
        contador++;
    }while(numero !=0);
    cout<<"La cantidad de digitos es "<<contador<<endl;

    return 0;
}
