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
        printf("%d\n", n);
        conta(n-1);
    }
    //printf("desempilhando o contexto do n = %d\n", n);
}