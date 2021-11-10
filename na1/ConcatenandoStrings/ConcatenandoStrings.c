#include <stdio.h>
#include <string.h>

int main()
{
    char str1[201], str2[201];
    while(scanf("%s %s", str1, str2) != EOF)
    {
        strcat(str1, str2);
        printf("%s\n", str1);
    }
    return 0;
}