#include <iostream>

using namespace std;

int main(){
    /**Escriba un programa que lea 3 notas y muestre el promedio final**/
    float nota1, nota2, nota3, promedioFinal;
    //Ingrear primera nota
    cout<<"Nota 1: ";
    cin>> nota1;
    //Ingrear segunda nota
    cout<<"Nota 2: ";
    cin>> nota2;
    //Ingresar tercera nota
    cout<<"Nota 3: ";
    cin>> nota3;
    //Promedio formula
    promedioFinal = (nota1+nota2+nota3)/3;
    cout<<"Promedio final: "<<promedioFinal<<endl;

    return 0;
}
