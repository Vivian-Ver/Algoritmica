#include <stdio.h>
#include <conio.h>


int main()
{
    float calificacion;

    printf("Ingrese Calificacion: ");

    scanf("%f", &calificacion);

    if(calificacion>6)
    {
        printf("Aprobado");
    }

    else
    {
        printf("Repobado");
    }
    getch();
}
