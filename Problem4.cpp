#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

// Problema 10
void crearmatrices(int **&X,int filas,int columnas)
{
	X = new int *[filas];
	for (int i=0;i<filas;i++) 
	{
		X[i]=new int [columnas];
	}
}

void llenarmatrices(int **&X,int filas,int columnas)
{
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cin>>*(*(X+i)+j);
		}		
	}
}

void mostrar(int **X,int filas,int columnas)
{
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cout<<*(*(X+i)+j)<<"	";
		}
		cout<<endl;
	}
}

void multiplicar(int **M1,int **M2,int filas1,int columnas1,int filas2,int columnas2)
{
	int **M3;
	crearmatrices(M3,filas1,columnas2);
	for (int i = 0; i < filas1; ++i)
	{
		for (int j = 0; j < columnas2; ++j)
		{
			M3[i][j]=0;
			for (int k = 0; k < filas2; ++k)
			{
				M3[i][j]+=M1[i][k]*M2[k][j];
			}			
		}
	}
	mostrar(M3,filas1,columnas2);
}

int main()
{
	int **M1,**M2,filas1,columnas1,filas2,columnas2;
	cin>>filas1>>columnas1>>filas2>>columnas2;
	crearmatrices(M1,filas1,columnas1);
	crearmatrices(M2,filas2,columnas2);
	llenarmatrices(M1,filas1,columnas1);
	llenarmatrices(M2,filas2,columnas2);
	multiplicar(M1,M2,filas1,columnas1,filas2,columnas2);
}
