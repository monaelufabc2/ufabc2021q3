#include <stdio.h>

void inverteNumeros(int);

int main()
{
    int num;
    scanf("%d", &num);
    while(num != 0)
    {
        inverteNumeros(num);
        printf("\n");
        scanf("%d", &num);
    }
    return 0;
}

void inverteNumeros(int n)
{
    if(n > 0)
    {
        printf("%d", n%10);
        inverteNumeros(n/10);
    }
}