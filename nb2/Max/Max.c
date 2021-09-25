#include <stdio.h>

int main()
{
    int num, maior, primeiro = 1;

    scanf("%d", &num);
    while(num >= 0)
    {
        if(primeiro || num > maior)
        {
            maior = num;
            primeiro = 0;
        }
        scanf("%d", &num);
    }
    if(!primeiro)
    {
        printf("%d\n", maior);
    }
    else
    {
        printf("nenhum numero informado\n");
    }

    return 0;
}