#include <stdio.h>

int main()
{
    int mat[][3] = { {666,11,2}, {33,4,5}, {6,7,8}, {9,10,11} }, i;

    printf("mat: %p\n", mat);
    printf("*mat: %p\n", *mat);
    printf("mat[0]: %p\n", mat[0]);
    printf("&mat[0][0]: %p\n", &mat[0][0]);
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


    for(i=0; i<4*3; i++)
    {
        printf("(*mat)+%d : %p ==> *((*mat)+%d): %d\n", i, (*mat)+i, i, *((*mat)+i));
    }
    return 0;
}