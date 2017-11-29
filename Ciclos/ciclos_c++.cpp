#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


int ciclo_for (){

	int suma=0;
   int i;
	for(i=0; i<=9; i++){
   	suma=suma+i;
   }

	return suma;
}

int ciclo_while () {

	int t;
   int total=0;
   while(t<=10){
    total=total+t;
    t++;
   }

   return total;
}


int ciclo_do() {

	int suma2;
   int r;

 do {
 suma2=suma2+r;
 r++;
}
while(r<=4);

return suma2;



main() {

	cout<<"Ciclo FOR "<<ciclo_for()<<endl;
   cout<<"Ciclo While "<<ciclo_while()<<endl;
   cout<<"Ciclo Do While "<<ciclo_do()<<enld;


   system("pause");

}