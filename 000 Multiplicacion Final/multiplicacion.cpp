#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string>

//Variables Globales
int acarreo, c, indice;
char multiplicacion[30];

int alinear(char a[], char b[])
{
	indice = a.length() - 1;
	while(indice > -1)
	{
		if (a[indice] == '.')
		{
			multiplicacion = '.' + multiplicacion;
		}
		else
		{
			c = tabla_multiplicacion(a[indice], b[indice], acarreo);
		}
		if(c > 9)
		{
			acarreo = 1;
			c -= 10;
		}	
		else
		{
			acarreo = 0;
		}
		multiplicacion = c.str() + multiplicacion;
		indice   -= 1;
	}
	if (acarreo > 0)
	{
		multiplicacion = acarreo.str() + multiplicacion;
	}
	if(suma [multiplicacion.length() - 1] == '.')
	{
		multiplicacion = extracto(multiplicacion, 0, multiplicacion.length() -2);
	}
	return multiplicacion;
}

bool buscar(int extracto, int cadena)
{
	if(posicion(extracto, cadena) > -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int posicion(int cadena, int indice, int longitud)
{
	for(int i=0; 0 < cadena.length(); i++)
	{
		if(extracto(cadena, i, extracto.length())== extracto)
		{
			return indice;
		}
	}
	return -1
}

void tablaMultiplicacion(int a, int b, int acarreo)
{
	char tabla[][];

	tabla[0] = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
	tabla[1] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
	tabla[2] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];
	tabla[3] = [3, 6, 9, 12, 15, 18, 21, 24, 27, 30];
	tabla[4] = [4, 8, 12, 16, 20, 24, 28, 32, 36, 40];
	tabla[5] = [5, 10, 15, 20, 25, 30, 35, 40, 45, 50];
	tabla[6] = [6, 12, 18, 24, 30, 36, 42, 48, 54, 60];
	tabla[7] = [7, 14, 21, 28, 35, 42, 49, 56, 63, 70];
	tabla[8] = [8, 16, 24, 32, 40, 48, 56, 64, 72, 80];
	tabla[9] = [9, 18, 27, 36, 45, 54, 63, 72, 81, 90];
	tabla[10] = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];

	a += acarreo;
	return tabla[a][b];
}


//Funcion Principal
int main(){
	multiplicacion()
}