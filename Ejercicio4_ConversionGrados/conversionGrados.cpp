#include <iostream>

using namespace std;
int main(){
    /**Construya un programa que permita convertir una temperatura
    en grados Celsius a Fahrenheit (C = 5(F-32)/9)
    y Kelvin (C =K-273.15).**/
    //Declaracion de las variables
    float celsius, fahrenheit, kelvin;
    //Ingresar los celsius
    cout<<"Ingrese los grados celsius: ";
    cin>>celsius;
    //Formula de fahrenheit
    fahrenheit = ((celsius*9)/5)+32;
    kelvin = celsius + 273.15;
    cout<<"Los grados en kelvin es "<<kelvin<<endl;
    cout<<"Los grados en fahrenheit son "<<fahrenheit<<endl;


    return 0;
}
