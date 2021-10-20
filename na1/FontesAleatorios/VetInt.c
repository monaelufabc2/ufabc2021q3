#include <stdio.h>

int main()
{
    int vetor[] = {666,2,3,4,5,6,7,8,9,10}, i;

    for(i=0; i<10; i++)
    {
        printf("%d%c", vetor[i], i<9?' ':'\n');
    }

    printf("vetor: %p\n", vetor);
    printf("*vetor: %d\n", *vetor);
    printf("&vetor[0]: %p\n", &vetor[0]);
    printf("vetor + 4 bytes: %p\n", vetor + 1);
    printf("*vetor + 4 bytes: %d\n", *(vetor + 1));
    printf("vetor + 8 bytes: %p\n", vetor + 2);
    printf("*vetor + 8 bytes: %d\n", *(vetor + 2));
    printf("vetor + 12 bytes: %p\n", vetor + 3);
    printf("*vetor + 12 bytes: %d\n", *(vetor + 3));
    printf("vetor + 16 bytes: %p\n", vetor + 4);
    printf("*vetor + 16 bytes: %d\n", *(vetor + 4));

    for(i=0; i<10; i++)
    {
        printf("%d%c", *(vetor+i) , i<9?' ':'\n');
    }

    /* vetor[i] <==> *(vetor+i) */

    return 0;
}