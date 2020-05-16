#include <iostream>
using namespace std;

int TamanioCharRecursivo (char *A)
{
    if (*A == '\0')
        return 0;
    return 1 + TamanioCharRecursivo (++A);
}

void CopiaCadena (char *A, char *B)
{
    int lenA=TamanioCharRecursivo(A);
    for (int i = 0; i < lenA; i++)
    {
        *B++=*A++;
        
    }
   *B='\0';
}

int main()
{
    char A[50]="Al infinito y mas alla";
    char B[50]="auxilio me desmayo 123454667658765";

    CopiaCadena(A,B);
    cout<<"Ahora B es: "<<B<<endl;

}