#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /***** ARCHIVOS DE TEXTO *****/
    /**
    cout -> Console OUTput -> SALIDA por consola
    cin -> Console INput  -> ENTRADA por consola

    ifstream -> InputFile Stream -> Flujo de entrada de Archivo (lectura)
    ofstream -> OutputFileStream -> Flujo de salida a archivo (Escritura)

    3 PASOS PRINCIPALES
    1.- Abrir mi archivo
    2.- Operar sobre mi archivo
    3.- CERRAR tu archivo
    **/
    ifstream entrada;
    char linea[80];
    entrada.open("archivo.txt");
    entrada.getline(linea,80);
    cout<<linea<<endl;
    entrada.close();
    return 0;
}

