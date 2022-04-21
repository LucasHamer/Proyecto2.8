#include<stdio.h>
#include<stdlib.h>

int main()
{
    int fechaE,dd,mm,aa;
    printf("Ingrese la fecha en ddmmaa: ");
    scanf("%d", &fechaE);

    dd=fechaE/10000;
    mm=(fechaE%10000)/100;
    aa=(fechaE%10000)%100;

    printf("0%d ",aa);
    printf("0%d ",mm);
    printf("0%d ",dd);

    return 0;
}
