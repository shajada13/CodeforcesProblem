#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;

        if(a == b) {
            cout << 0 << "\n";
        } else {
            long long x = a ^ b;
            if(x <= a) {
                cout << 1 << "\n" << x << "\n";
            } else {
                cout << 2 << "\n" << a << " " << b << "\n";
            }
        }
    }
    return 0;
}
