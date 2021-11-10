#include <stdio.h>
#include <string.h>

int main()
{
    char str1[104], str2[104];
    while(scanf("%s %s", str1, str2) != EOF)
    {
        if(strcmp(str1, str2) != 0) // str1 == str2
        {
            puts("diferentes");
        }
        else
        {
            puts("iguais");
        }
    }
    return 0;
}