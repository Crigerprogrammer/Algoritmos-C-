#include <iostream>

using namespace std;

int main(){
    /**Construya un programa que identifique
    si una letra es una vocal**/
    char letra;
    cout<<"Ingrese una letra: ";
    cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':cout<<"Es una vocal"<<endl;
            break;
        default: cout<<"No ha ingresado una vocal"<<endl;
    }
    return 0;
}
