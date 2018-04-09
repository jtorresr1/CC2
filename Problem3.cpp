#include <iostream>

using namespace std;

void swap(int &x,int &y)
{
	int aux=x;
	x=y;
	y=aux;
}

void insertsort(int *x,int len)
{
	int j;
	for (int i = 0; i < len; i++)
	{
		j = i;		
		while (j > 0 && x[j] < x[j-1])
		{
			swap(x[j],x[j-1]);			
			j--;
		}
	}
}

int divide(int *x, int inicio, int fin) {
    int iz,der,pivot,temp;
 
    pivot = x[inicio];
    iz = inicio;
    der = fin;
 
    while (iz < der) 
    {
        while (x[der] > pivot) 
        {
            der--;
        }
 
        while ((iz < der) && (x[iz] <= pivot)) 
        {
            iz++;
        }
 
        if (iz < der) 
        {
            temp = x[iz];
            x[iz] = x[der];
            x[der] = temp;
        }
    } 
    temp = x[der];
    x[der] = x[inicio];
    x[inicio] = temp;    
    return der;
}

void quicksort(int *x, int inicio, int len)
{
    int pivot;
 
    if (inicio < len) 
    {
        pivot = divide(x, inicio, len);       
        quicksort(x, inicio, pivot - 1);        
        quicksort(x, pivot + 1, len);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m; 
   
    int L[n1], R[n2];
   
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j]; 

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }   
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    } 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
} 

void mergeSort(int *x, int l, int r)
{
    if (l < r)
    {
       
        int m = l+(r-l)/2; 
        mergeSort(x, l, m);
        mergeSort(x, m+1, r); 
        merge(x, l, m, r);
    }
}


int main()
{
	int a[]={7,6,5,4,3,9};
	int len = 6;	
	//insertsort(&a[0],len);
	//quicksort(a,0,len);
	mergeSort(a,0,len);
	for (int i = 0; i < len; ++i) cout<<a[i]<<endl;
}
