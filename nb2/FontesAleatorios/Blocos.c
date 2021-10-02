#include <stdio.h>

int main()
{
    int i = 0;

    while(i < 5);
    {
        printf("i:%d\n", i);
        i++;
    }
    return 0;
}


/*

int main()
{
    int i = 0;

    while(i < 5)
        printf("i:%d\n", i);
        i++;

    return 0;
}

EQUIVALE

int main()
{
    int i = 0;

    while(i < 5)
    {
        printf("i:%d\n", i);
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
        printf("i:%d\n", i);
        i++;
    }
    return 0;
}

EQUIVALE A:

int main()
{
    int i = 0;

    while(i < 5)
    {
        
    }
    {
        printf("i:%d\n", i);
        i++;
    }
    return 0;
}




*/