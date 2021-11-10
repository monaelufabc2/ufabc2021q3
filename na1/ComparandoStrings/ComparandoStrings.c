#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101];
    while(scanf("%s %s", str1, str2) != EOF)
    {
        if(strcmp(str1, str2) == 0)
        {
            puts("iguais");
        }
        else
        {
            puts("diferentes");
        }
    }
    return 0;
}