#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Ponto
{
    int x, y;
};

struct Ponto criaPonto(int, int);

int main()
{
    struct Ponto p1;
    struct Ponto *pt, *vp;
    int x, y, n, i;

    scanf("%d %d", &x, &y);
    p1 = criaPonto(x, y);
    pt = &p1;
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("pt: %p\n", pt);
    printf("*pt: (%d, %d)\n", (*pt).x, (*pt).y);
    printf("*pt: (%d, %d)\n", pt->x, pt->y);

    scanf("%d", &n);

    vp = (struct Ponto*) malloc(n * sizeof(struct Ponto));
    for(i=0; i<n; i++)
    {
        vp[i] = criaPonto(rand()%10, rand()%10);
    }

    for(i=0; i<n; i++)
    {
        printf("vp[%d]: (%d, %d)\n", i, vp[i].x, vp[i].y);
    }

    free(vp);

    return 0;
}

struct Ponto criaPonto(int x, int y)
{
    struct Ponto p;
    p.x = x;
    p.y = y;
    return p;
}