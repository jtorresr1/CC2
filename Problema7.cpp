#include <iostream>
#define N 10
using namespace std;

void reasignarmemoria(char *a,int b)
{
	a = new char [N+b+2];
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

void concatenararreglos (char *a,char b[])
{
	a+=strlen(a);
	int lenb=strlen(b);	
	for(char i=0;i<=lenb;i++)
	{
		*(a++)=b[i];		
	}	
}

void concatenarpunteros(char *a,char *b)
{
	a+=strlen(a);
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
	if(strlen(x)+strlen(y)>N) reasignarmemoria(x,strlen(y));
	//concatenararreglos(x,y);
	concatenarpunteros(x,y);
	cout<<x<<endl;
	return 0;

}