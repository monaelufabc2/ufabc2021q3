#include <stdio.h>

long int fatorial(int);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%ld\n", fatorial(n));

    return 0;
}

long int fatorial(int n)
{
    if(n > 0)
    {
        return n * fatorial(n-1);
    }
    return 1;
}