#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

main(){

 int li;
 int ls;
 int i;

 cout<<"Programa para limite inferior y superior"<<endl;
 cout<<"Coloque el limite inferior"<<endl;
 cin>>li;
 cout<<"Coloque el limite superior"<<endl;
 cin>>ls;

 for(i=li; li<ls; i++){
   li++;
  cout<<" "<<i<<endl;

 }




 system("pause");
 return 0;
}