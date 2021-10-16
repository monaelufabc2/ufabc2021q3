#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int i, n = atoi(argv[1]);
    char flagGen = argv[2][0]; // 'M' para Masc | 'F' para Fem | 'A' para Masc e Fem
    srand(time(NULL));
    for(i=0; i<n; i++)
    {
        printf("%d\n", (rand()%91)+10);
        printf("%d.%d\n", rand()%3, rand()%100);
        printf("%d.%d\n", rand()%100, rand()%100);
        if(flagGen == 'A')
        {
            printf("%c%s", rand()%100<50?'M':'F', i<n-1?"\n":"");
        }
        else
        {
            printf("%c%s", flagGen, i<n-1?"\n":"");
        }
    }
    return 0;
}