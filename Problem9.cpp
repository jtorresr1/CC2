// Problema 9

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

bool palindromo(char b[])
{
	int j=strlen(b);
	for(int i=0;i<j/2;i++)
	{
		if(b[i]!=b[j-1-i]) return false;
	}
	return true;
}

int main()
{
	char a[100]={"acffca"};
	if(palindromo(a)) cout<<"Es palindromo"<<endl;
	else cout<<"NO es palindromo"<<endl;
	return 0;
}
