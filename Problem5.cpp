#include <iostream>

using namespace std;

// Problema 4
int contararrays(char a[])
{
	int cont=0;
	char *aux=&a[0];
	for(;*aux!='\0';aux=&a[++cont]);
	return cont;
}

int contarpunteros(char a[])
{
	char *ptr=a;
	char * ptr2;
	do
	{
		if(*(a)=='\0') ptr2=a;
	}while(*(a++)!='\0');
	return ptr2-ptr;
}

int main()
{
	char a[100]={"Hola mundo  dd"};
	cout<<contarpunteros(a)<<endl;
	cout<<contararrays(a)<<endl;
	return 0;
}
