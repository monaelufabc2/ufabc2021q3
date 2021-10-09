#include <stdio.h>

unsigned long int potencia(int, int);

int main()
{
    int b, e;
    scanf("%d %d", &b, &e);
    printf("%lu\n", potencia(b, e));
    return 0;
}

unsigned long int potencia(int b, int e)
{
    if(e == 0)
    {
        return 1;
    }
    return b * potencia(b, e-1);
}