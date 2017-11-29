/*2. Escribir un programa que de la entrada estandar el precio de un producto y muestre
en la salida estandar el precio del producto al aplicarle el IVA */

#include <iostream.h>
#include <stdlib.h>

int main(){

 float precio, precioFinal, IVA;

 cout<<"Digite el precio del producto: "<<endl;
 cin>>precio;

 IVA = precio*0.12;
 precioFinal = precio + IVA;

 cout<<"El precio final al aplicarle el IVA es: "<<precioFinal<<endl;


 system("PAUSE");
 return 0;
}