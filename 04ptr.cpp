#include<iostream>
#include<string.h>
using namespace std;


int TamanioCharIterativo (char* A)
{
    int i=0;
    for (i = 0; ; i++)
    {
        if (*A++== '\0')
            break;
    }

    return i;
    
}
int TamanioCharRecursivo (char* A)
{
    if (*A == '\0')
        return 0;
    return 1 + TamanioCharRecursivo (++A);
}

int main()
{
    //char B[]={'H', 'o', 'l', 'a', '\0'};
    //char B[] = "Al infinito y mas alla";
    char B[50] = {'\0'};
    cout<<"Ingrese una cadena: ";
    cin.getline(B, 50);
    
    cout<<B<<endl;
    cout<<"La longitud de la cadena es: "<< TamanioCharIterativo(B)<<endl;
    cout<<"La longitud de la cadena es: "<< TamanioCharRecursivo(B)<<endl;
    cout<<"La longitud de la cadena es: "<< strlen(B)<<endl;

}