#include <stdio.h>

typedef struct {
    int num;
    char descr[25];
    double valor;
    int qtdes[12];} TProd;
TProd vProd;

int main()
{
    TProd vProd;
    printf("num ");
    scanf("%i", &vProd.num);
    printf("\ndescr ");
    gets(vProd.descr);
    printf("\nvalor ");
    scanf("%lf", &vProd.valor);
    for(int i = 0; i < 12; i++)
    {
        printf("\nqtde %i ", i+1);
        scanf("%i", &vProd.qtdes[i]);
    }
    printf("\nnum %i \ndescr %s \nvalor %lf", vProd.num, vProd.descr, vProd.valor);
    for(int i = 0; i < 12; i++)
        printf("\nqtde %i %i", i, vProd.qtdes[i]);
}
