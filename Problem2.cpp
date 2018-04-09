#include <iostream>

using namespace std;

int sumaiterativa(int x[],int y)
{
	int cont=0;
	for (int i = 0; i < y; ++i)
	{
		cont+=x[i];
	}
	return cont;
}

int sumarecursiva(int x[],int y)
{
	if(y==0) return 0;
	return x[--y]+sumarecursiva(x,y);
}
int main()
{
	int a[]={4,5,6,4,8};
	int len = 5;
	cout<<sumaiterativa(a,len)<<endl;
	cout<<sumarecursiva(a,len)<<endl;
}
