#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        int rem ; 
       for ( int i = 0 ; i < 2 ; i++)
        {
            rem = n % 10;
            sum += rem ;
            n = n / 10 ;
        }

        cout << sum << endl; 
        
    }
    return 0;
}