#include <stdio.h>

int main()
{
    int mat[][4] = { {666,2,3,4}, {5,6,7,8} }, i;

    printf("mat: %p\n", mat);
    printf("*mat: %p\n", *mat);
    printf("**mat: %d\n", **mat);
    printf("mat+1: %p\n", mat+1);
    printf("**(mat+1): %d\n", **(mat+1));
    printf("(*mat)+1: %p\n", (*mat)+1);
    printf("*((*mat)+1): %d\n", *((*mat)+1));
    printf("*(mat+1)+1: %p\n", *(mat+1)+1);
    printf("*(*(mat+1)+1): %d\n", *(*(mat+1)+1));

    for(i=0; i<2*4; i++)
    {
        printf("i:%d (*mat)+%d: %p *((*mat)+%d):%d\n", i, i, (*mat)+i, i, *((*mat)+i));
    }

    return 0;
}



/*

0 0  ==> eb0
0 1  ==> eb4
0 2  ==> eb8
0 3  ==> ebc
1 0  ==> ec0
1 1  ==> ec4
1 2  ==> ec8
1 3  ==> ecc



*/