#include <stdio.h>
#include <conio.h>


int main()
{
    int caso, num1, num2, res;
    printf("Cual de las soluciones de la calculadora quieres usar \n\n1.-Suma\n2.-restar \n\n :");
    scanf ("%d", &caso);

    switch(caso)
    {
        case 1: printf("Numero a sumar:");
        scanf ("%d", &num1);
        printf("Numero a sumar:");
        scanf ("%d", &num2);
        res=num1+num2;
        printf("Resultado: %d", res);
        break;

        case 2:printf("Numero a restar:");
        scanf ("%d", &num1);
        printf("Numero a restar:");
        scanf ("%d", &num2);
        res=num1-num2;
        printf("Resultado: %d", res);
        break;
        default: printf("No es una de las opciones");
    }
    getch();
}
