#include <iostream>

using namespace std;

int main(){
    /**Un numero fibonacci es aquel que al sumarse con el anterior crea un nuevo numero**/

    int N,a1=0,a2=1,an;
    cout<<"Ingrese N: ";
    cin>>N;

    if(N<2){
        cout<<"El n-esino termino es "<<N<<endl;
    }
    else{
        for(int i=2;i<=N;i++){
            an = a1+a2;
            a1 = a2;
            a2 = an;
        }
        cout<<"El n-esino termino es "<<an<<endl;
    }

    return 0;
}
