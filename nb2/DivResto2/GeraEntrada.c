#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%d %d", rand()%10001, rand()%101);
    return 0;
}