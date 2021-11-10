#include <stdio.h>
#include <string.h>

int main()
{
    char str[104];

    while(scanf("%s", str) != EOF)
    {
        printf("%ld\n", strlen(str));
    }
    return 0;
}