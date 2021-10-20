#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *vet;

    scanf("%d", &n);
    while(n != 0)
    {
        vet = (int*) malloc(n*sizeof(int));
        scanf("%d", &n);
        free(vet);
    }
    return 0;
}