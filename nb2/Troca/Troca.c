#include <stdio.h>

void troca(long int*, long int*);

int main()
{
    long int a, b;
    scanf("%ld %ld", &a, &b);
    troca(&a, &b);
    printf("%ld %ld\n", a, b);
    return 0;
}

void troca(long int *ptA, long int *ptB)
{
    long int aux = *ptA;
    *ptA = *ptB;
    *ptB = aux;
}





/* SOLUCAO COM MAL PROJETO DA FUNCAO
int main()
{
    long int a, b;
    scanf("%ld %ld", &a, &b);
    troca(a, b);
    return 0;
}

void troca(long int a, long int b)
{
    long int aux = a;
    a = b;
    b = aux;
    printf("%ld %ld\n", a, b);
}
*/


/* TROCA FAKE
int main()
{
    long int a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld %ld\n", b, a);
    return 0;
}
*/