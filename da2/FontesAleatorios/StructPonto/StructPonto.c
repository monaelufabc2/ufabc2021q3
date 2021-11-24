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
    struct Ponto p1, p2;
    struct Ponto *pt;
    struct Ponto *vp;
    int x, y, n, i;

    srand(time(NULL));

    scanf("%d", &x);
    scanf("%d", &y);

    p1 = criaPonto(x, y);

    printf("p1 : (%d, %d)\n", p1.x, p1.y);

    p2 = p1;

    printf("p2 : (%d, %d)\n", p2.x, p2.y);

    pt = &p1;

    printf("pt : %p\n", pt);
    printf("*pt : (%d, %d)\n", (*pt).x, (*pt).y);
    printf("*pt : (%d, %d)\n", pt->x, pt->y);


    scanf("%d", &n);
    vp = (struct Ponto *) malloc(n * sizeof(struct Ponto));
    for(i=0; i<n; i++)
    {
        vp[i] = criaPonto(rand()%10, rand()%10);
    }

    for(i=0; i<n; i++)
    {
        printf("vp[%d]: (%d, %d)\n", i, vp[i].x, vp[i].y);
    }

    return 0;
}

struct Ponto criaPonto(int x, int y)
{
    struct Ponto p;
    p.x = x;
    p.y = y;
    return p;
}