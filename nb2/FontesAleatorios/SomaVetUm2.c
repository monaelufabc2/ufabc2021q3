#include <stdio.h>

void somaVetUm(int *, int);

int main()
{
    int a=10, b=20, c=30, d=40, e=50, f=60, g=70, h=80, i=90, j=100, k=110;

    printf("&a=%p\n&b=%p\n&c=%p\n&d=%p\n&e=%p\n&f=%p\n&g=%p\n&h=%p\n&i=%p\n&j=%p\n&k=%p\n", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d\ng=%d\nh=%d\ni=%d\nj=%d\nk=%d\n", a, b, c, d, e, f, g, h, i, j, k);

    somaVetUm(&a, 11);

    printf("\na=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d\ng=%d\nh=%d\ni=%d\nj=%d\nk=%d\n", a, b, c, d, e, f, g, h, i, j, k);
    return 0;
}

void somaVetUm(int *v, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        v[i] = v[i] + 1;
    }
}