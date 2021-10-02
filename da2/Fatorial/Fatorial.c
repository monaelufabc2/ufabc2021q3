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
    int i;
    long int fat = 1;

    for(i=n; i>0; i--)
    {
        fat = fat * i;
    }

    return fat;
}

/*
long int fatorial(int n)
{
    int i;
    long int fat;

    for(i=n, fat=1; i>0; fat*=i, i--);

    return fat;
}
*/
/*for(<inicializacao>; <condicao de parada>; <modificacao da variavel de controle>)*/