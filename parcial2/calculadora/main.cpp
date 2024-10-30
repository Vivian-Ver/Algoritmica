#include <stdio.h>
#include <conio.h>

int main()
{
    float n1, n2, op, t;

    printf("Numero 1: ");
    scanf("%f", &n1);

    printf("Numero 2: ");
    scanf("%f", &n2);

    printf("\n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n\n Elija una operacion: ");
    scanf("%f", &op);

    if(op==1)
    {
        t=n1+n2;
        printf("El total es: %f", t);
    }
    else
    {
        if(op==2)
        {
            t=n1-n2;
            printf("El total es: %f", t);
        }
        else
        {
            if(op==3)
            {
            t=n1*n2;
            printf("El total es: %f", t);
            }
            else
            {
                if(op==4)
                {
                t=n1/n2;
                printf("El total es: %f", t);
                }
                else
                {
                    printf("Opcion no disponible");
                }
            }
        }
    }



    getch();
}
