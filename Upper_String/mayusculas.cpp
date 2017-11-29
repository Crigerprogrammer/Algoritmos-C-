#include <iostream>

using namespace std;

int main(){
    char nombre[30],c;
    int i=0;
    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre, 30);

    while(nombre[i]){
        c = toupper(nombre[i]);
        i++;
        cout<<c;
    }

    return 0;
}
