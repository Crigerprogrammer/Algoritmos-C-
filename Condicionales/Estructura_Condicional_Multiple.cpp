#include <iostream>

using namespace std;

int main(){
    int variable;
    cin>>variable;
    switch(variable){
    case 1: cout<<"Caso1"<<endl;
        break;
    case 2: cout<<"Caso2"<<endl;
        break;
    case 3: cout<<"Caso3"<<endl;
        break;
    default: cout<<"Ningun caso"<<endl;
    }

    return 0;
}
