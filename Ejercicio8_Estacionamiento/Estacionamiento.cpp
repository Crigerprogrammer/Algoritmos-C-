#include <iostream>

using namespace std;

int main(){
    /**En un estacionamiento cobran $ 1.50 por hora o fraccion
    Diseñe un programam que determine cuanto debe pagar un cliente por el estacionamiento
    de su vehiculo conocinendo el tiempo de estacionamiento en horas y minutos**/

    int horas, minutos;
    float total;

    cout<<"Horas: ";
    cin>>horas;
    cout<<"Minutos: ";
    cin>>minutos;

    if(minutos>0){
        horas ++;
    }
    total = horas*1.5;
    cout<<"El total a pagar es "<<total<<endl;

    return 0;
}
