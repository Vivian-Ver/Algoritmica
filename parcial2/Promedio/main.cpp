#include <stdio.h>
#include <conio.h>

int main()
{
    float c1,c2,c3, prom;

    printf ("Ingrese la primera calificacion: ");
    scanf("%f", &c1);
    printf ("Ingrese la segunda calificacion: ");
    scanf("%f", &c2);
    printf ("Ingrese la tercera calificacion: ");
    scanf("%f", &c3);

    prom= (c1+c2+c3)/3;

    printf("Su promedio es de: %f", prom);

    if(prom>=7)
    {
        printf("\n\nAprobado");
    }
    else
    {
        printf("\n\nReprobado");
    }
    getch();
}
