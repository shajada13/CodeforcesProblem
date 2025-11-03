#include <iostream>
using namespace std;

int main() {
    
    int k , n , w ;
    cin >> k >> n >> w ;

    int totalAmount = 0 ;

    for ( int i = 1 ; i <= w ; i++){
        int need = k*i ;
        totalAmount += need;
    }

    if (totalAmount > n){
    cout <<  ( totalAmount - n ) << endl;
    }else {
        cout << 0 << endl;
    }

    return 0;
}