#include <stdio.h>

int somaVet(int *, int);
void decrementaVet(int *, int);

int main()
{
    int a=10, b=20, c=30, d=40, e=50, f=60;

    printf("&a:%p\n", &a);
    printf("&b:%p\n", &b);
    printf("&c:%p\n", &c);
    printf("&d:%p\n", &d);
    printf("&e:%p\n", &e);
    printf("&f:%p\n", &f);

    printf("Soma = %d\n", somaVet(&a, 6));

    decrementaVet(&a, 6);

    printf("a:%d\n", a);
    printf("b:%d\n", b);
    printf("c:%d\n", c);
    printf("d:%d\n", d);
    printf("e:%d\n", e);
    printf("f:%d\n", f);

    return 0;

}

int somaVet(int *vet, int n)
{
    int i, soma=0;
    for(i=0; i<n; i++)
    {
        soma = soma + vet[i];
    }
    return soma;
}

void decrementaVet(int *vet, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        vet[i]--;
    }
}