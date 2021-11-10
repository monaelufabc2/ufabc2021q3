#include <stdio.h>

int main()
{
    char str[10];
    fgets(str, 10, stdin);
    printf("%s\n", str);
    puts(str);
    return 0;
}