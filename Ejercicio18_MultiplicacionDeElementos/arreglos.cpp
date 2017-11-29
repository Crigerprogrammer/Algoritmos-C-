#include <iostream>
#define MAX 5
using namespace std;

int main(){
    /**Lea 2 arreglos unidimensiomales con valores reales
    y usnado otro arreglo calcule la multiplicacion de los valores de ambos arreglos
    **/

    int arreglo1[MAX];
    int arreglo2[MAX];
    int arreglo3[MAX];
    cout<<"ARREGLO 1: ";
    for(int i=0;i<MAX;i++){
        cout<<"Indice "<<i<<" :";
        cin>>arreglo1[i];
    }

    cout<<"ARREGLO 2: ";
    for(int i=0;i<MAX;i++){
        cout<<"Indice "<<i<<" :";
        cin>>arreglo2[i];
    }

    cout<<"ARREGLO RESULTANTE: ";
    for(int i=0;i<MAX;i++){
        arreglo3[i] = arreglo1[i]*arreglo2[i];
    }

    for(int i=0;i<MAX;i++){
        cout<<arreglo3[i]<<" ";
    }

    return 0;
}
