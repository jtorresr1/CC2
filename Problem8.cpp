#include <iostream>

using namespace std;
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
void strcpy(char *a, char *b)
{
	int lenb=strlen(b);
	for(int i=0;i<=lenb;i++)
	{
		*(a++)=*(b++);
	}
}

void invertirarreglos(char *a)
{
	int lena=strlen(a);	
	char aux[100];
	strcpy(aux,a);
	for(int i=lena-1;i>=0;i--)
	{
		*(a++)=aux[i];
	}
}

void invertirpunteros(char *a)
{
	int lena=strlen(a);
	char aux;
	char *b=a;
	b+=strlen(a)-1;	
	for(int i=0;i<lena/2;i++)
	{
		aux=*a;
		*(a++) = *b;
		*(b--) = aux;
	}
}

int main()
{
	char x[100]={"Hola Mundo"};
	invertirpunteros(&x[0]);
	//invertirarreglos(&x[0]);
	cout<<x<<endl;

}
