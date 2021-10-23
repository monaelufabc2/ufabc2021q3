#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int n = atoi(argv[1]), m = atoi(argv[2]), i, j, digInt, digDec;

    srand(time(NULL));
    if(n > 0 && n <= 1000)
    {
        printf("%d\n", n);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                digInt = rand()%11;
                if(digInt != 10)
                {
                    digDec = rand()%100;
                }
                else
                {
                    digDec = 0;
                }
                printf("%d.%02d%s", digInt, digDec, j<m-1?" ":(i==n-1?"":"\n"));
            }
        }

    }
    else
    {
        printf("Entrada em linha de comando [%d] invalida.\n", n);
        printf("Informe um valor entre 1 e 1000.\n");
    }

    return 0;
}









/*
3
10.00 10.00 0.50
5.00 8.00 1.50
2.00 4.00 0.00

0 < N ≤ 1000
0.00 ≤ G1, G2, G3 ≤ 10.00
*/