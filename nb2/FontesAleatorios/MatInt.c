#include <stdio.h>

int main()
{
    int mat[][3] = { {666,11,22}, {33,44,5}, {6,7,8}, {9,10,11} }, i;

    printf("mat: %p\n", mat);
    printf("mat[0]: %p\n", mat[0]);
    printf("&mat[0]: %p\n", &mat[0]);
    printf("&mat[0][0]: %p\n", &mat[0][0]);
    printf("*mat: %p\n", *mat);
    printf("**mat: %d\n", **mat);
    printf("(*mat)+1: %p\n", (*mat)+1);
    printf("*((*mat)+1): %d\n", *((*mat)+1));
    printf("(*mat)+2: %p\n", (*mat)+2);
    printf("*((*mat)+2): %d\n", *((*mat)+2));
    printf("(*mat)+3: %p\n", (*mat)+3);
    printf("*((*mat)+3): %d\n", *((*mat)+3));

    printf("mat+1: %p\n", mat+1);
    printf("*(mat+1): %p\n", *(mat+1));
    printf("**(mat+1): %d\n", **(mat+1));
    printf("*(mat+1)+1: %p\n", *(mat+1)+1);
    printf("**(mat+1)+1: %d\n", *(*(mat+1)+1));

    printf("mat+2: %p\n", mat+2);
    printf("*(mat+2): %p\n", *(mat+2));
    printf("**(mat+2): %d\n", **(mat+2));
    printf("mat+3: %p\n", mat+3);
    printf("*(mat+3): %p\n", *(mat+3));
    printf("**(mat+3): %d\n", **(mat+3));

    printf("Primeiro Forzinho:\n");
    for(i=0; i<4; i++)
    {
        printf("%d\n", *(mat[i]));
    }

    printf("Segundo Forzinho:\n");
    for(i=0; i<4*3; i++)
    {
        printf("%p : %d\n", (*mat)+i, *((*mat)+i)); // *((*mat)+i) <==> mat[i][j]
    }

    return 0;
}