#include <stdio.h>
#include <conio.h>


int main()
{
    int dia, mes, anio, edad;
    printf ("Dame tu dia de nacimiento:");
    scanf ("%d", &dia);

    printf ("Dame tu mes de nacimiento:");
    scanf ("%d", &mes);

    printf("Dame tu anio de nacimiento:");
    scanf("%d", &anio);

    edad=2024-anio;
    printf("Tu edad es: %d", edad);

    getch();
}
