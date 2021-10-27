#include <stdio.h>

int main()
{
    int mat[][4] = { {666,1,2,8}, {3,4,5,9}, {6,7,8,7}, {9,10,11,43} };

    printf("mat: %p\n", mat);
    printf("mat[0]: %p\n", mat[0]);
    printf("&mat[0]: %p\n", &mat[0]);
    printf("&mat[0][0]: %p\n", &mat[0][0]);
    printf("*mat: %p\n", *mat);
    printf("**mat: %d\n", **mat);

    printf("mat+1: %p\n", mat+1);
    //printf("*mat+1: %d\n", *mat+1);
    printf("mat+2: %p\n", mat+2);
    printf("mat+3: %p\n", mat+3);

    return 0;
}