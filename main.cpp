//Programa: Nombre
#include <conio.h>
#include <stdio.h>
//cstdio

int main()
{
    char nombre[20],apellido[20];

    printf( "Introduzca su nombre:" );
    scanf( "%s", nombre );
    printf( "\nIntoduzca su apellido:" );
    scanf("%s", apellido);
    printf( "\nHola %s %s, buenos d%cas", nombre, apellido, 161 );//investigar para que el 161

    getch();//Pausa

    return 0;
}
