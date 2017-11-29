#include <iostream>

using namespace std;

int main(){
    /**Inbgresar el sueldo de un trabajador, categoria, condicion estable(E) o no estable (N)
    y reportar el pago total que se le debe hacer de acuerdo a lo siguiente:
    El porcentaje de bonificacion con respecto al sueldo se calcula con respecto a la siguiente tabla:
    CATEGORIA (A,B,C,D)
    ESTABLE(20%, 18%, 15%, 12%)
    NO ESTABLE(17%, 15%, 14%, 10%)
    El calculo del descuento es con respecto al sueldo+bonificacion
    Estable 6% No estable 4%
    **/
    float sueldo;
    char categoria, condicion;
    cout<<"Categoria: "<<endl;
    cin>>categoria;
    cout<<"Condicion: "<<endl;
    cin>>condicion;
    cout<<"Sueldo: "<<endl;
    cin>>sueldo;

    if(condicion == 'E'){
        switch(categoria){
            case 'A': sueldo = sueldo*1.20;
                break;
             case 'B': sueldo = sueldo*1.18;
                break;
            case 'C': sueldo = sueldo*1.15;
                break;
            case 'D': sueldo = sueldo*1.12;
                break;
        }
        sueldo = sueldo*0.94;
    }
    else if(condicion == 'N'){
         switch(categoria){
            case 'A': sueldo = sueldo*1.17;
                break;
             case 'B': sueldo = sueldo*1.15;
                break;
            case 'C': sueldo = sueldo*1.14;
                break;
            case 'D': sueldo = sueldo*1.10;
                break;
         }
         sueldo = sueldo*0.96;
    }
    cout<<"El sueldo final es "<<sueldo<<endl;

    return 0;
}
