#include <stdio.h>

int main()
{
    int mat[][4] = { {666,1,2,65}, {3,4,5,543}, {6,7,8,645}, {9,10,11,654} };

    printf("mat: %p\n", mat);
    printf("*mat: %p\n", *mat);
    printf("mat[0]: %p\n", mat[0]);
    printf("&mat[0][0]: %p\n", &mat[0][0]);
    printf("**mat: %d\n", **mat);

    printf("mat+1: %p\n", mat+1);
    return 0;
}