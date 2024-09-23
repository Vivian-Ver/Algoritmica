#include <iostream>//usae

using namespace std;// usamos espacio de nombre estandar cout salida, sin entrada, cerr salida de errores, clog se usa para mensaje de log

int main()
{
    float celsius, fahrenheit;

    cout << "Grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << "°C Son " << fahrenheit << "°F" << endl;

    return 0;
}
