#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    strcpy(str2, str1); //str2 = str1;
    printf("%s\n", str2);
    return 0;
}

/*

int i;
i = 54;

char c;
c = 'z';

int v[10];

v = {1,2,3,4} // ERRO!

int v[] = {1,2,3,4,5}; // inicializacao

v[0] = 4;
v[1] = 4;
...
v[9] = 5;


char s[10];
s = "UFABC"; // ERRO

s[0] = 'U';
s[1] = 'F';
...
s[4] = 'C';
s[5] = '/0';

char s[] = {'U','F','A','B','C','\0'};

strcpy(s, "UFABC"); //s = "UFABC";
strcpy(str1, str2); //str1 = str2;
*/