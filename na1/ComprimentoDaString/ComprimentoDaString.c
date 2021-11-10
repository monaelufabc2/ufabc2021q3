#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    while(scanf("%s", str) != EOF)
    {
        printf("%ld\n", strlen(str));
    }
    return 0;
}