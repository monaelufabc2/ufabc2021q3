#include <stdio.h>

int main()
{
    int ano;

    scanf("%d", &ano);
    if(ano%400 == 0 || ano%100 != 0 && ano%4 == 0)
    {
        puts("ANO BISSEXTO");
    }
    else
    {
        puts("ANO NAO BISSEXTO");
    }

    return 0;
}