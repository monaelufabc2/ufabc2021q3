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
int i; //declaracao
i = 0; //atribuicao

float f; //declaracao
f = 3.5; //atribuicao

char c;
c = 'u';

int v[10];
v[0] = 5;
v[1] = 5;
...
v[9] = 65;

int v[] = {4,23,6,87,234,731,4};

int v[10];
v = {5,423,6,345,36} // ERRADO!!!

char str[10];

str = "Universidade"; // ERRADO!!!!

char str[] = {'U','n','i','v','e','r','s','i','d','a','d','e','\0'};

strcpy(str, "Universidade"); // str = "Universidade";
strcpy(primStr, segStr); // primStr = segStr;

*/