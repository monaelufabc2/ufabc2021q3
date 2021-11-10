#include <stdio.h>
#include <string.h>

void printfInverso(char *);

int main()
{
    char str[1001];
    scanf("%s", str);
    printfInverso(str);
    printf("\n");
    return 0;
}

void printfInverso(char *str)
{
    int i;
    for(i=strlen(str)-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
}