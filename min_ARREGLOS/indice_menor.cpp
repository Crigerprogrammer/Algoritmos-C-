#include <iostream>

using namespace std;

int main(){
    /**Lea un arreglo o indique cual es el menor elemento
    y en que indice se encuentra **/

    int arreglo[10];
    int menor;
    for(int i=0;i<10;i++){
        cout<<"Ingrese el valor del indice "<<i<<" :";
        cin>>arreglo[i];
    }

    menor = 0;

    for(int i=1;i<10;i++){
        if(arreglo[i]<arreglo[menor]){
            menor = i;
        }
    }

    cout<<"El menor elemento es "<<arreglo[menor]<<" con el indeice "<<menor<<endl;
    return 0;
}
