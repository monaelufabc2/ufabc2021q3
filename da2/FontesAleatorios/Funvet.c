#include <stdio.h>

void funcaoMaisUm(int*, int, int*);

int main()
{
    int v[] = {1,2,3,4,5,6,7,8,9,10}, valor = 100, i;

    printf("v[]:");
    for(i=0; i<10; i++)
    {
        if(i<9)
        {
            printf("%d ", v[i]);
        }
        else
        {
            printf("%d\n", v[i]);
        }
    }
    printf("valor:%d\n", valor);

    funcaoMaisUm(v, 10, &valor); // <==> funcaoMaisUm(&v[0], 10, &valor);

    printf("v[]:");
    for(i=0; i<10; i++)
    {
        printf("%d%c", v[i], i<9?' ':'\n');
    }
    printf("valor:%d\n", valor);

    return 0;
}

void funcaoMaisUm(int *v, int n, int *ptVal)
{
    int i;
    for(i=0; i<n; i++)
    {
        v[i]++;
    }
    *ptVal = *ptVal + 1;
}