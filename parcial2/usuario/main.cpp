#include <iostream>

using namespace std;

int main()
{
    int c,x=999;
    do
    {
        cout << "Usuario: Admin \n\n Password: ";
        cin >> c;

        if(c!=x)
        {
            cout << "Contraseña Incorrecta" <<endl;
        }

    } while(c!=x);

    cout << "Contraseña Correcta"<<endl;

    return 0;
}
