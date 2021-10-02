#include <stdio.h>

int main()
{
    int i=0;

    while(i<5);
    {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}


/*

while(i<5);
{
    printf("i = %d\n", i);
    i++;
}

EQUIVALE A:

while(i<5)
{

}
printf("i = %d\n", i);
i++;


while(i<5)
{

}
{
    printf("i = %d\n", i);
    i++;
}

*/



/*
ESSE CODIGO:

 while(i<5)
    printf("i = %d\n", i);
    i++;

EQUIVALA A ESTE:

 while(i<5)
 {
    printf("i = %d\n", i);
 }
 i++;
*/