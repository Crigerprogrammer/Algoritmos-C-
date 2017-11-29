#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

main() {
	//Declaracion de la variable sueldo quien tomara el valor del usuario diga
   double sueldo;
   double sueldototal;
   double sueldocomision;
   cout<<"Ingrese el sueldo"<<endl;
   cin>>sueldo;


   //La primera condicion, rango de los sueldos de 5001 a 9999
   //Sueldo normal

   if (sueldo >= 5000 && sueldo <= 10000){
   	sueldocomision = sueldo * 0.05;
      sueldototal = sueldocomision + sueldo;
      cout<<"El sueldo base es de: "<<sueldo<<endl;
      cout<<" Las comisiones son: "<<sueldocomision<<endl;
      cout<<" Se le dio 5% mas de comision"<<endl;
      cout<<" El sueldo total es de: "<<sueldototal<<endl;
   }

   //Segunda condicion, si el sueldo agregado es menor de 4000 (5999 a 0)
   else if (sueldo < 5000) {
   	sueldocomision = sueldo * 0.02;
      sueldototal = sueldocomision + sueldo;
      cout<<"El sueldo base es de: "<<sueldo<<endl;
      cout<<" Las comisiones son: "<<sueldocomision<<endl;
      cout<<"Se le dio un 2% mas de comision"<<endl,
      cout<<" El sueldo total es de: "<<sueldototal<<endl;
   }
   //Sino cuando el sueldo sea mayor de 10000 tirara el comentario
   else {
   	cout<<"Su sueldo es mayor que el promedio"<<endl;
      sueldocomision = sueldo * 0.10;
      sueldototal = sueldocomision + sueldo;
      cout<<"El sueldo base es de: "<<sueldo<<endl;
      cout<<" Las comisiones son: "<<sueldocomision<<endl;
      cout<<"Se le dio un 10% mas de comision"<<endl,
      cout<<" El sueldo total es de: "<<sueldototal<<endl;

   }

    system("pause");
    return 0;
}