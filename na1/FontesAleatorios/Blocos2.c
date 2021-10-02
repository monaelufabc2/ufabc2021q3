#include <stdio.h>

int main()
{
    int i = 10;
    {
        int j = 20;
        int k = 30;
        printf("i:%d\nj:%d\nk:%d\n", i, j, k);
    }
    printf("i:%d\nj:acabou de morrer\nk:acabou de morrer tambem\n", i);
    {
        int l = 40;
        int m = 50;
        printf("i:%d\nj:morreu faz tempo\nk:morreu faz tempo tambem\nl:%d\nm:%d\n", i, l, m);
    }
    printf("i:%d\nl:morreu agorinha\nm:recem morrido\n", i);
    return 0;
}