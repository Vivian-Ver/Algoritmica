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
            cout << "Contrase�a Incorrecta" <<endl;
        }

    } while(c!=x);

    cout << "Contrase�a Correcta"<<endl;

    return 0;
}
