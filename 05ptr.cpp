#include <iostream>
using namespace std;
int TamanioCharRecursivo (char *A)
{
    if (*A == '\0')
        return 0;
    return 1 + TamanioCharRecursivo (++A);
}

void UnirCadenas (char *A, char *B)
{
    int lenB=TamanioCharRecursivo(B);
    int lenA=TamanioCharRecursivo(A);
    B+=lenB; // papunta al último caracter de la cadena
    for(int i=0; i<lenA; i++)
        *B++=*A++;
//        *B=*A;
//        B++;
//        A++;
    *B = '\0'; //marcamos el fin de la cadena
}

int main()
{
    char A[50]= {'\0'};
    char B[100] = {'\0'};

    cout<<"Ingrese una cadena: "<<endl;
    cin.getline(A,50);
    cout<<"Ingrese una cadena: "<<endl;
    cin.getline(B, 100);

    UnirCadenas(A,B);
    cout<<"Mostrando cadenas unidas: "<<B<<endl;
    return 0;
}