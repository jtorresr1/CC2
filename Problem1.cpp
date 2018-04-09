#include <iostream>

using namespace std;

//por referencia
void swap(int &x,int &y)
{
	int aux=x;
	x=y;
	y=aux;
}

//por valor
int suma(int x,int y) 
{return x+y;}

int main()
{
	int x=5,y=4;
	int z=suma(x,y);
	swap(x,y);
	cout<<x<<"	"<<y<<endl;
}