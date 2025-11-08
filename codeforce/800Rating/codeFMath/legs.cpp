#include <iostream>
using namespace std;

int main() {
    int t ; 
    cin >> t ;

    while (t--){
        int n ;
        cin >> n ;

        int countCow = 0 ;

        int countChi = n / 2 ;
        if (n%4 == 0){
        countCow = n / 4 ;
        }else {
            countCow =  (n / 4 ) + 1 ;
        }

        if (countChi > countCow){
            cout << countCow << endl;
        }else {
            cout << countChi << endl;
        }
    }
    return 0;
}