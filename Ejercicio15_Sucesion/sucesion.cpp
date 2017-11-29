#include <iostream>

using namespace std;

int main(){
    int N;
    float suma=0;
    cout<<"Ingrese N: ";
    cin>>N;

    for(int i=2;i<=N;i++){
        suma = suma + 1.0/i;
    }

    cout<<"La suma total es "<<suma<<endl;

    return 0;
}
