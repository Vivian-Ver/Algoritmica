#include <iostream>
#include <string>
using namespace std;

int main() {
    double saldo = 10000.00;
    int pin = 9999,p;
    int opcion;

    do {
        /* Menú */
        cout << " \n CAJERO AUTOMATICO " << endl;
        cout << "1. retirar dinero" << endl;
        cout << "2. consultar saldo" << endl;
        cout << "3. cambiar PIN" << endl;
        cout << "4. transferir fondos" << endl;
        cout << "5. salir" << endl;
        cout << "seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Introduzca Pin: ";
            cin>> p;
            if (p==pin)
            {
                /*  Retirar dinero */
                double cantidad;
                cout << "ingrese la cantidad a retirar: ";
                cin >> cantidad;

                if (cantidad > saldo)
                {
                    cout << "fondos insuficientes." << endl;
                }
                else
                {
                    saldo -= cantidad;
                    cout << "retiro exitoso. su nuevo saldo es: " << saldo << endl;
                }
            }
            else
            {
                cout << "Pin Incorrecto" << endl;
            }
        } else if (opcion == 2)
        {
            cout << "Introduzca Pin: ";
            cin>> p;
            if (p==pin)
            {
                /* Consultar saldo */
                cout << "su saldo disponible es: " << saldo << endl;
            }
            else
            {
                cout << "Pin Incorrecto" << endl;
            }
        } else if (opcion == 3)
        {

                /* Cambiar PIN */
                int pinActual, nuevoPIN, confirmarPIN;
                cout << "ingrese su PIN actual: ";
                cin >> pinActual;

                if (pinActual == pin)
                {
                    cout << "ingrese el nuevo PIN: ";
                    cin >> nuevoPIN;
                    cout << "confirme el nuevo PIN: ";
                    cin >> confirmarPIN;

                    if (nuevoPIN == confirmarPIN)
                    {
                        pin = nuevoPIN;
                        cout << "PIN cambiado exitosamente." << endl;
                    }
                    else
                    {
                        cout << "error, los PIN no coinciden." << endl;
                    }
                }
                else
                {
                    cout << "error: PIN actual incorrecto." << endl;
                }

        }
        else if (opcion == 4)
        {
            cout << "Introduzca Pin: ";
            cin>> p;
            if (p==pin)
            {
                /* Transferir fondos */
                string cuentaDestino;
                double cantidad;

                cout << "ingrese el número de cuenta destino: ";
                cin >> cuentaDestino;
                cout << "ingrese la cantidad a transferir: $";
                cin >> cantidad;

                if (cantidad > saldo)
                {
                    cout << "fondos insuficientes." << endl;
                }
                else
                {
                    saldo -= cantidad;
                    cout << "transferencia realizada " << cantidad << " a la cuenta " << cuentaDestino << "." << endl;
                    cout << "su nuevo saldo es: " << saldo << endl;
                }
            }
            else
            {
                cout << "Pin Incorrecto" << endl;
            }
        } else if (opcion == 5)
        {
            /* para salir */
            cout << "gracias por usar el cajero automatico. bai :))" << endl;
        }
        else
        {
            /*opcion invalida */
            cout << "opcion invalida, intente nuevamente." << endl;
        }

    } while (opcion != 5);

    return 0;
}
