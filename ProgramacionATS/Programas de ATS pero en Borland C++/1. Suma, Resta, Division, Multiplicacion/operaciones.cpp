//1. Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estandar su suma
//su resta, multiplcacion y division

#include <iostream.h>
#include <stdlib.h>

int main(){
	int n1, n2, suma, resta, multiplicacion, division;

   cout<<"Ingrese el primer numero: "<<endl;
   cin>>n1;
   cout<<"Ingrese el segundo numero: "<<endl;
   cin>>n2;

   suma = n1 + n2;
   resta = n1 - n2;
   multiplicacion = n1 * n2;
   division = n1 / n2;

   cout<<"La suma es: "<<suma<<endl;
   cout<<"La resta es: "<<resta<<endl;
   cout<<"La multiplicacion es: "<<multiplicacion<<endl;
   cout<<"La division es: "<<division<<endl;

   system("PAUSE");
	return 0;
}