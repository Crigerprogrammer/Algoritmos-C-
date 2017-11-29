#include <iostream>

using namespace std;

int main(){
    /** ARREGLOS UNDIMENSIONALES **/

    int arreglo1[10]; /**Declaracion de un arreglo**/
    int arreglo2[] = {1,2,3,4,5}; /**Asignacion de arreglo **/

    for (int i=0;i<10;i++){
        cout<<"Indice "<<i<<":";
        cin>>arreglo1[i];
    }

    for (int i=0;i<10;i++){
        cout<<arreglo1[i]+" ";
    }


    cout<<"El primer elemento es: "<<arreglo2[0]<<endl;
    cout<<"El ultimo elemento es: "<<arreglo2[4]<<endl;
    return 0;
}
