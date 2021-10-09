/*

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
      ^  ^  ^                ^
      0  1  1                13
      +  +  +                +
      1  1  2                21



      fibonacci(1) = 0
      fibonacci(2) = 1
      fibonacci(n) = fibonacci(n-2) + fibonacci(n-1)


      f(3) = f(1) + f(2)
      f(3) = 0 + 1 = 1


      f(4) = f(2) + f(3) --> f(1) + f(2)
                    f(3) --> 0 + 1 = 1
      f(4) = 1 + 1 = 2

                   = 0, para n = 1
      fibonacci(n) = 1, para n = 2
                   = fibonacci(n-2) + fibonacci(n-1), para n > 2
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
    return fibonacci(n-2) + fibonacci(n-1);
}