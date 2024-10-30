#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Da un numero: ";
    cin >> n;
    for (int num=1; num<=10; num++)
    {
        cout << n << " x " << num << " = " << n*num << endl;
    }
    return 0;
}
