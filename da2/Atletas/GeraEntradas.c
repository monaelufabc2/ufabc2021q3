#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int i, quantidade = atoi(argv[1]);
    char flagGen = argv[2][0]; // 'M' soh M / 'F' soh F / 'A' ambos
    srand(time(NULL));

    for(i=0; i<quantidade; i++)
    {
        printf("%d\n",(rand()%101)+10);
        printf("%d.%d\n", rand()%3, rand()%100);
        printf("%d.%d\n", rand()%100, rand()%100);
        if(flagGen == 'A')
        {
            printf("%c%s", rand()%100<50?'M':'F', i<quantidade-1?"\n":"");
        }
        else
        {
            printf("%c%s", flagGen, i<quantidade-1?"\n":"");
        }
    }

    return 0;
}