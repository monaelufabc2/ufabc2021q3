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
    struct Ponto p = criaPonto(35, 65);
    struct Ponto *pt, *vp;
    int n, i;

    pt = &p;

    printf("P: (%d, %d)\n", p.x, p.y);
    printf("PT: %p\n", pt);
    printf("PT: (%d, %d)\n", (*pt).x, (*pt).y);
    printf("PT: (%d, %d)\n", pt->x, pt->y);

    scanf("%d", &n);
    vp = (struct Ponto *) malloc(n * sizeof(struct Ponto));
    srand(time(NULL));
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