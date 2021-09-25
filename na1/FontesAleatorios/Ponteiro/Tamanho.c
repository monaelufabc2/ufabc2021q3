#include <stdio.h>

int main()
{
    int i = 1, m = 7;
    int *pti = &i, *ptm = &m;

    printf("pti: %p  ptm:%p\n", pti, ptm);
    printf("%p - %d\n", pti+1, *(pti+1));

    return 0;
}