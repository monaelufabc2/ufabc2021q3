#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * strupr(char *);

int main()
{
    char str[101];
    int i;
    while(scanf("%s", str) != EOF)
    {
        printf("%s\n", strupr(str));
    }
    return 0;
}

char * strupr(char *str)
{
    int i;
    for(i=0; i<strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}