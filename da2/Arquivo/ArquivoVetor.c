#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int n = atoi(argv[1]), i, *v, *vr;
    FILE *arquivo = fopen(argv[2], "w");

    srand(time(NULL));
    v = (int*) malloc(n*sizeof(int));
    puts("Antes de salvar em arquivo:");
    for(i=0; i<n; i++)
    {
        v[i] = rand()%1001;
        printf("%d ", v[i]);
    }

    fwrite(v, sizeof(int), n, arquivo);
    fclose(arquivo);
    puts("\nSalvou no Arquivo");

    arquivo = fopen(argv[2], "r");
    vr = (int*) malloc(n * sizeof(int));
    fread(vr, sizeof(int), n, arquivo);

    puts("Depois de recuperar do arquivo:");
    for(i=0; i<n; i++)
    {
        printf("%d ", vr[i]);
    }
    free(vr);
    fclose(arquivo);
    return 0;
}