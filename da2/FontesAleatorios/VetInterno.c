#include <stdio.h>

int main()
{
    int vet[] = {666,2,3,4,5,6,7,8,9,10}, i;

    printf("vet: %p\n", vet);
    printf("*vet: %d\n", *vet);
    printf("&vet[0]: %p\n", &vet[0]);

    printf("vet + 4bytes: %p\n", vet+1);
    printf("*(vet + 4bytes): %d\n", *(vet+1));
    printf("vet + 8bytes: %p\n", vet+2);
    printf("*(vet + 8bytes): %d\n", *(vet+2));
    printf("vet + 12bytes: %p\n", vet+3);
    printf("*(vet + 12bytes): %d\n", *(vet+3));
    printf("vet + 16bytes: %p\n", vet+4);
    printf("*(vet + 16bytes): %d\n", *(vet+4));

    for(i=0; i<10; i++)
    {
        printf("vet[%d]:[%p]:%d <==> v[i]:%d\n", i, vet+i, *(vet+i), vet[i]);
    }

    return 0;
}