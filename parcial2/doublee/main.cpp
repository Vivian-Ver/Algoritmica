#include <stdio.h>
#include <conio.h>

int main()
{
    double num, pro, sum;

    sum=0;
    pro=1;

    printf("\nEscribe numero dif a 0=");
    scanf("%lf", &num);

    while(num!=0)
    {
        sum=sum+num;
        pro=pro*num;

        printf("\nNumero= %lf Suma %lf Producto= %lf", num, sum, pro);

        printf("\nNuevo num: ");
        scanf("%lf", &num);
    }
    printf("\n\nSum T: %lf prod to= %lf", sum ,pro);
}
