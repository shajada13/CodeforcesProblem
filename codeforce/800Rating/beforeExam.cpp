#include <iostream>
using namespace std;

int main() {

    int d , sumTime , minTime , maxTime ;
    cin >> d  >> sumTime ;
    cin >> minTime >> maxTime ;

    int min = d * minTime ;
    int max = d * maxTime ;

    if ( sumTime < min && sumTime < max ){
        cout << "YES" <<endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}