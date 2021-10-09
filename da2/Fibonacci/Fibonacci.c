/*

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,
      ^  ^  ^                    ^^
      0  1  1                    21
      +  +  +                    +
      1  1  2                    34


      fibonacci(1) = 0, para n = 1
      fibonacci(2) = 1, para n = 2
      fibonacci(n) = fibonacci(n-2) + fibonacci(n-1), para n > 2

*/

#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

