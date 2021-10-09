#include <stdio.h>
//#include <conio.h> // NAO EH ANSI
#include "meugetch.h"

int contaChars();

int main()
{
    printf("%d\n", contaChars());
    return 0;
}

int contaChars()
{
    char letra;
    letra = getche(); // NAO EH ANSI
    if(letra != 10)
    {
        return contaChars() + 1;
    }
    return 0;
}