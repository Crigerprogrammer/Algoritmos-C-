#include <iostream.h>
#include <stdlib.h>
#include <string.h>

void multiplicacion(string x[], string y[])
{
	y[1] = '$';
	cout<<y<<endl;
}

int main()
{
	multiplicacion("1.23", "4.567");
	system("pause");
	return 0;
}