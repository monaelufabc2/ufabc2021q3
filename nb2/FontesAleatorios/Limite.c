#include <stdio.h>

int main()
{
    int v[10], i;
    for(i=0; i<5000; i++)
    {
        v[i] = 10;
        printf("v[%d]:%d\n", i, v[i]);
    }
    printf("i: %d\n", i);
    return 0;
}