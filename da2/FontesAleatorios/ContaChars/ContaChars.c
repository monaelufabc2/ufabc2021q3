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
    char c;
    c = getche(); // NAO EH ANSI, MAS ESTA NO MEUGETCH.H
    if(c == 10)
    {
        return 0;
    }
    return contaChars() + 1;
}