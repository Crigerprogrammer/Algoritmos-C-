#include <iostream>


using namespace std;
void cambiarCien(int&);

int main(){

    int numero = 5;
    cout<<"Antes del procedimiento :"<<numero<<endl;
    cambiarCien(numero);
    cout<<"Despues del procedimiento :"<<numero<<endl;

    return 0;
}

void cambiarCien (int &a){
    a = 100;
}
