#include "Data.h"

struct Data criaData(int d, int m, int a)
{
    struct Data dt;
    dt.dia = d;
    dt.mes = m;
    dt.ano = a;
    return dt;
}