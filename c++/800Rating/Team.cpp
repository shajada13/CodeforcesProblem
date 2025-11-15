#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int count = 0 ;

    while (T--)
    {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;


        if (Petya + Vasya + Tonya >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}