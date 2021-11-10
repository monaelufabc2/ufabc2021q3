#include <stdio.h>
#include <string.h>

//str2 = str1;

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    strcpy(str2, str1);//str2 = str1;
    printf("%s\n", str2);
    return 0;
}