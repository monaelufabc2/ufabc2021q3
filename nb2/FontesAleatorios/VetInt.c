#include <stdio.h>

int main()
{
    int vet[] = {666,2,3,4,5,6,7,8,9,10}, i;

    for(i=0; i<10; i++)
    {
        printf("%d%c", vet[i], i<9?' ':'\n');
    }

    printf("vet: %p\n", vet);
    printf("*vet: %d\n", *vet);
    printf("&vet[0]: %p\n", &vet[0]);

    printf("vet + 4 bytes: %p\n", vet+1);
    printf("*vet + 4 bytes: %d\n", *(vet+1));
    printf("&vet[1]: %p\n", &vet[1]);

    printf("vet + 8 bytes: %p\n", vet+2);
    printf("*vet + 8 bytes: %d\n", *(vet+2));
    printf("&vet[2]: %p\n", &vet[2]);

    printf("vet + 12 bytes: %p\n", vet+3);
    printf("*vet + 12 bytes: %d\n", *(vet+3));
    printf("&vet[3]: %p\n", &vet[3]);

    printf("vet + 16 bytes: %p\n", vet+4);
    printf("*vet + 16 bytes: %d\n", *(vet+4));
    printf("&vet[4]: %p\n", &vet[4]);

    for(i=0; i<10; i++)
    {
        printf("%d%c", *(vet+i), i<9?' ':'\n');
    }

    return 0;
}