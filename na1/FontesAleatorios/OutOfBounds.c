#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, vetor[10];

    srand(time(NULL));
    for(i=0; i<200; i++)
    {
        vetor[i] = rand()%100;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("i:%d\n", i);
    return 0;
}