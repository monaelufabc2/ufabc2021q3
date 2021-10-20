#include <stdio.h>

void somaVetUm(int *, int);

int main()
{
    int a=10, b=20, c=30, d=40, e=50, f=60, g=70, h=80, i=90, j=100;

    printf("&a=%p\n&b=%p\n&c=%p\n&d=%p\n&e=%p\n&f=%p\n&g=%p\n&h=%p\n&i=%p\n&j=%p\n", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d\ng=%d\nh=%d\ni=%d\nj=%d\n", a, b, c, d, e, f, g, h, i, j);
    somaVetUm(&a, 10);

    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=%d\ng=%d\nh=%d\ni=%d\nj=%d\n", a, b, c, d, e, f, g, h, i, j);
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