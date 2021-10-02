#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 5)
    {
        int j = i;
        printf("%d\n", j);
        i++;
    }
    printf("i:%d\nj:acabou de morrer\n", i);
    return 0;
}

/*
    ... for(int i=0; i<n; i++)
        {
            ...
        }
        i ???
*/


/*

int main()
{
    int i = 0;
    while(i < 5)
        printf("%d\n", i);
        i++;

    return 0;
}

EH EQUIVALENTE

int main()
{
    int i = 0;
    while(i < 5)
    {
        printf("%d\n", i);
    }
    i++;

    return 0;
}

*/


/*

int main()
{
    int i = 0;
    while(i < 5);
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

EH EQUIVALENTE A:

int main()
{
    int i = 0;
    while(i < 5)
    {

    }
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}


*/