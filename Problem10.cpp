// Problema 10
#include <iostream>

using namespace std;

float pow(int x,int y)
{
	float con=1;
	if (y==0) return con;
	for (int i=0;i<y;i++)
	{
		con*=x;
	}
	return con;
}

int strlen(char a[])
{
	char *ptr=&a[0];
	char * ptr2;
	int i=0;
	do
	{
		if(a[i]=='\0') ptr2=&a[i];
	}while(a[i++]!='\0');
	return ptr2-ptr;
}

float convertir(char b[])
{
	int j=strlen(b);
	float cont=0;
	int exp=0;
	for(int i=j-1;i>=0;i--)
	{
		if(b[i]==',') 
		{
			cont/=(pow(10,exp));
			exp=-1;
		}
		else cont+=((b[i]-'0')*pow(10,exp));
		exp++;
	}
	return cont;
}

int main()
{
	char a[100]={"7,58"};
	cout<<convertir(a)<<endl;
	return 0;
}
