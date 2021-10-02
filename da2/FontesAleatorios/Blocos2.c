#include <stdio.h>

int main()
{
    int i = 10;
    printf("i:%d\n", i);
    {
        int j = 20;
        printf("i:%d j:%d\n", i, j);
        {
            int k = 30;
            printf("i:%d j:%d k:%d\n", i, j, k);
        }
        printf("i:%d j:%d k:morreu\n", i, j);
    }
    printf("i:%d j:morreu k:morreu faz tempo\n", i);

    for(int j=0; j<10; j++)
    {
        printf("%d ", j);
    }
    printf("j = acabou de morrer\n");

    return 0;
}
