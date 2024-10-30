#include <iostream>

using namespace std;

int main()
{
    int puntaje;

    cout <<"Da el puntaje(0-100): ";
    cin >> puntaje;

    char letra;

    switch(puntaje/10)
    {
        case 10:
             letra = 'A';
             break;
        case 9:
            letra = 'A';
            break;
        case 8:
            letra = 'B';
            break;
        case 7:
            letra = 'C';
            break;
        case 6:
            letra = 'D';
            break;
        default: letra = 'F';
    }
    cout << "La calificacion es: " << letra << endl;
    return 0;
}
