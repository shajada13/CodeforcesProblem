#include <iostream>
using namespace std;

int main() {
    
    int n ; 
    cin >> n ;

    int count = 0 , note = 0;

    if (n >= 100){
        note = n / 100 ;
        n = n % 100 ;
        count += note;
    }
     if ( n  >= 20){
        note = n / 20 ;
        n = n % 20 ;
        count += note ;
    }
    if (n  >= 10){
        note = n / 10 ;
        n = n % 10 ;
        count += note ;
    }
    if ( n  >= 5){
        note = n / 5 ;
        n = n % 5 ;
        count += note ;
    }
     if (n  >= 1){
        note = n / 1;
        n = n % 1 ;
        count += note ;
    }

    cout << count << endl;
    return 0;
}