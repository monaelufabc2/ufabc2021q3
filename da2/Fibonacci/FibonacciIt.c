#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    int i, fiboAnt = 0, fiboAtu = 1, fiboProx;
    for(i=1; i<n; i++)
    {
        fiboProx = fiboAnt + fiboAtu;
        fiboAnt = fiboAtu;
        fiboAtu = fiboProx;
    }
    return fiboAnt;
}


/*
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233

*/