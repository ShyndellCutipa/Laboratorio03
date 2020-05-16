#include <iostream>
using namespace std;

void Ingresar (int *myPtr, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Ingrese elemento "<<i<<": ";
        cin >> *myPtr++;
    }
}
void Mostrar (int *myPtr, int n)
{
    for (int i=0; i<n; i++)
        cout << *myPtr++ <<" ";
    cout << endl;
}

int SumaIterativa(int *myPtr,int n)
{
    int suma=0;
    for (int i=0; i<n ;i++)
            suma += *myPtr++;
    return suma;
}

int SumaRecursiva(int *myPtr, int n)
{
    if (n==0)
        return 0;
    return *myPtr + SumaRecursiva(++myPtr, n-1);
}



int main ()
{
    int n;
    cout<<"Ingrese longitud del arreglo: ";
    cin>>n;

    int A[n] = {0};

    Ingresar (A,n);
    cout<<"Mostrando arreglo: ";
    Mostrar (A, n);
    cout<< "La suma iterativa de los elementos del arreglo es: "<< SumaIterativa(A, n)<<endl;
    cout<< "La suma recursiva de los elementos del arreglo es: "<< SumaRecursiva(A, n)<<endl;

    return 0;
}
