#include <stdio.h>
#include <string.h>

//str2 = str1;

int main()
{
    char str1[101], str2[101];
    int i;

    scanf("%s", str1);
    for(i=0; i<strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s\n", str2);
    return 0;
}