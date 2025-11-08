#include <iostream>
using namespace std;

int main() {
    
    int n ;
    cin >> n ;

    int cube = 0 ;
    int total = 0 ;

    int i ;
        for( i = 1 ; i <= n ; i++){
            cube = i + cube ;
            total += cube ;
            if (total > n ) break;
        }
   

    cout <<  (i - 1) << endl;
    return 0;
}