#include <stdio.h>

int main()
{
    int i = 10;
    {
        int j = 20;
        printf("i:%d j:%d\n", i, j);
        {
            int k=30;
            printf("i:%d j:%d k:%d\n", i, j, k);
            k++;
        }
        j++;
    }
    i++;
    printf("i:%d j:ja morreu k:ja morreu\n", i);

    for(int j=0; j<10; j++)
    {
        printf("%d ", j);
    }

    printf("\nj:acabou de morrer\n");
    return 0;
}