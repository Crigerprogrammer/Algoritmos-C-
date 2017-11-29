#include <iostream>

using namespace std;

int main(){
    char cadena1[] = "Cristian Hernandez";
    char cadena2[] = {'C','r','i','s','t','i','a','n','\0'};
    char cadena3[10];


    cout<<cadena1<<endl;
    cout<<cadena2<<endl;
    cout<<"Ingrese una cadena: ";
    cin.getline(cadena3, 30);
    cout<<"La cadena es: "<<cadena3<<endl;

    return 0;
}
