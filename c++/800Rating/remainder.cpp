#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        int k =  x * ((n - y ) / x ) + y ;

        
        cout << k << endl;
        
    }
    return 0;
}