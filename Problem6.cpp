#include <iostream>

using namespace std;

#define N 10

void reasignarmemoria(char *a,int b)
{
	a = new char [b+2];
}

int strlen(char a[])
{
	char *ptr=a;
	char * ptr2;
	do
	{
		if(*(a)=='\0') ptr2=a;
	}while(*(a++)!='\0');
	return ptr2-ptr;
}
void copyarreglos(char *a,char b[])
{
	int lenb=strlen(b);
	for(int i=0;i<=lenb;i++)
	{
		*(a++)=b[i];
	}
}
void copypunteros(char *a, char *b)
{
	int lenb=strlen(b);
	for(int i=0;i<=lenb;i++)
	{
		*(a++)=*(b++);
	}
}

int main()
{
	char *x = new char [N];
	cin.getline(x,N,'\n');
	char y[100]={"Pdresfdf dfsdfs"};
	if(strlen(y)>=N)	reasignarmemoria(x,strlen(y));
	//copyarreglos(x,y);
	copypunteros(x,y);	
	cout<<x<<endl;
	return 0;
}

