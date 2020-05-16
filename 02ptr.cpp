#include <iostream>
using namespace std;



void InversionIterativa (int *A, int n)
{
    int *myPtr2 = A + n - 1; 
    for (int i = 0; i < n/2; i++)
    {
        int temp = *myPtr2;
        *myPtr2 = *A;
        *A = temp;
        A++;
        myPtr2--;
    }
}
void InversionRecursiva (int *A, int n)
{
    if (n>0) 
    { 
        int temp =*A;
        *A = A[n-1];
        A[n-1] = temp;
        InversionRecursiva(++A, n-2);
    }
}

void mostrar (int *A, int n)
{
    for (int i=0; i<n; i++)
        cout<<*A++<<" ";
    cout<<endl;
}
int main()
{
    int n=4;
    int A[n]={1,2,7,3};
    cout<<"Mostrando arreglo: ";
    mostrar(A,n);
    cout<<"Arreglo invertido de manera iterativa: ";
    InversionIterativa(A,n);
    mostrar(A,n);
    cout<<"Arreglo invertido de manera recursiva: ";
    InversionRecursiva (A,n);
    mostrar(A,n);

    return 0;
}