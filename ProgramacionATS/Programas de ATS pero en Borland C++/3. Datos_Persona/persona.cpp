/*3. Realice un programa que lea de la entrada estander los siguientes datos de una persona:

	Edad, Sexo, Altura en metros

Tras leer los datos, el programa debera mostrarlos en la salida estandar */

#include <iostream.h>
#include <stdlib.h>

int main(){
  int edad;
  char sexo[10];
  float altura;

  cout<<"Digite su edad: "<<endl;
  cin>>edad;
  cout<<"Digite su sexo: "<<endl;
  cin>>sexo;
  cout<<"Digite su altura en metros: "<<endl;
  cin>>altura;

  cout<<"Su edad es: "<<edad<<endl;
  cout<<"Su sexo es: "<<sexo<<endl;
  cout<<"Su altura es: "<<altura<<endl;



 system("PAUSE");
 return 0;
}