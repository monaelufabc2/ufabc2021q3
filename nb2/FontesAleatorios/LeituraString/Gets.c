#include <stdio.h>

int main()
{
    char str[10];
    gets(str);
    printf("%s\n", str);
    puts(str);
    return 0;
}