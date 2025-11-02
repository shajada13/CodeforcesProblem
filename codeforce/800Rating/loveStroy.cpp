#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    string s1 = "codeforces" ;

    while (t--)
    {
        string s;
        cin >> s;

        int count = 0 ;
        for (int i = 0 ; i < 10 ; i++){
            if (s[i] != s1[i]){
                count++ ;
            }
        }
        cout << count << endl;
    }

 
}