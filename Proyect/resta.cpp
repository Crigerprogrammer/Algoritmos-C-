#include <cstdlib>
#include <iostream>
/* Es el numero maximo de filas y columnas que puede tener las matrices de acuerdo al define max 20*/
# define max 20
using namespace std;
void  ingresoMatriz( float A[max][max],int &f,int &c)
{
   int i,j,k;
 
   do
   {
       cout<<"ingrese numero de filas: ";
       cin>>f;
   } while(f<0 &&f>max);
 
 
   do
   {
        cout<<"ingrese numero de columnas: ";
        cin>>c;
   }while(c<0 &&c>max);
 
   cout<<endl;
 
   for(i=0;i<f;i++)
   {
        for(j=0;j<c;j++)
        {
              cout<<"matriz ["<<i+1<<"]["<<j+1<<"]:";
              cin>>A[i][j];
        }
   }
}
void reportarMatriz(float A[max][max],int f ,int c)
{   int i,j;
   for(i=0;i<f;i++)
   {
        for(j=0;j<c;j++)
        {
           cout<<A[i][j]<<"\t";  
        }
        cout<<endl;
   }
   cout<<endl;
}
/* funcion sumar matrices **/
bool sumarMatriz(float A[max][max],float B[max][max],float C[max][max],int fA,int cA,int fB,int cB)
{ int i,j;
  bool suma =false;
  /* condicion principal para poder sumar matrices:el numero de filas y columnas de la primera
    matriz deben de ser iguales a la segunda matriz */
   if( (fA==fB)&&(cA==cB))
   {
             for(i=0;i<fA;i++)
             {/*sumamos fila por fila:la primera fila de la matriz A[max]
               con la primera fila de la matriz B[max]*/
                 for(j=0;j<cA;j++)
               /* sumamos los elementos que se encuntran en la misma posecion*/
                 C[i][j]=A[i][j]+B[i][j];
              }
              // si se cumple la condicion principal entonces la suma es verdadero
              suma=true;

   }
   else cout<<"las filas y las columnas de las matrices deben de ser iguales"<<endl;
   return suma;
}
bool restarMatrices(float A[max][max],float B[max][max],float C[max][max],int fA,int cA,int fB,int cB)
{ int i,j;
  bool resta=false;     
    /* condicion principal para poder restar matrices:el numero de filas y columnas de la primera
    matriz deben de ser iguales a la segunda matriz */ 
     if( (fA==fB)&&(cA==cB))
     {
             for(i=0;i<fA;i++)
              {
               /*restamos fila por fila:la primera fila de la matriz A[max]
               con la primera fila de la matriz B[max]*/             
                 for(j=0;j<cA;j++)
                 /* restamos  los elementos que se encuntran en la misma posecion*/
                 C[i][j]=A[i][j]- B[i][j];
              }
              resta=true;
     }
     else cout<<"las filas y las columnas de las matrices deben de ser iguales"<<endl;
    return resta;   
}
int main(int argc, char *argv[])
{
  
      float A[max][max],B[max][max],C[max][max];
      int f1,c1, f2, c2;
      int matrizC;
      ingresoMatriz(A,f1,c1);
      reportarMatriz(A,f1,c1);
      ingresoMatriz(B,f2,c2);
      reportarMatriz(B,f2,c2);
      cout<<"matriz sumada"<<endl;
     if(sumarMatriz(A,B,C,f1,c1,f2,c2))
        reportarMatriz(C,f1,c1);
     cout<<"matriz restada"<<endl;
    if(restarMatrices(A,B,C,f1,c1,f2,c2))
        reportarMatriz(C,f1,c1);
    	cout<<"Programa creado por "<<endl;
    	cout<<"Cristian Gerardo Hernandez Barrios"<<endl;
    	cout<<"0900-15-549"<<endl;
    	cout<<"Cristian Alexander Estrada"<<endl;
    	cout<<"0900-14-21875"<<endl;
   		cout<<"Hector Rodrigo Melendez Melgas"<<endl;
    	cout<<"0900-10-2166"<<endl;
    system("PAUSE");
   return EXIT_SUCCESS;
}
