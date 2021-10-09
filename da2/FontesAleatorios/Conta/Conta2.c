#include <stdio.h>

void conta(int);

int main()
{
    int n;
    scanf("%d", &n);
    conta(n);
    return 0;
}

void conta(int n)
{
    if(n > 0)
    {
        conta(n-1);
        printf("%d\n", n);
    }
}