#include<stdio.h>

int main()
{
    float media;

    scanf("%f", &media);
    if(media >= 60)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}