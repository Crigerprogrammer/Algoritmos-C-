#include <iostream>

using namespace std;

int main(){
    /**Dibujar un triangulo **/

    int N;
    cout<<"Ingrese N: ";
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int e=1;e<=i;e++){
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
