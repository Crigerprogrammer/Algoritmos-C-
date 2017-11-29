#include <iostream>

using namespace std;

int main(){
    /**BUFER DE ENTRADA**/
    char nombre[25];
    int edad;

    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cin.ignore();
    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre, 25);

    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;

    return 0;
}
