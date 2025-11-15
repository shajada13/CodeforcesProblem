#include <iostream>
using namespace std;

int main() {
    int n, k, t;
    cin >> n >> k >> t;

    int total = n * k;
    int progress = total * t / 100;  

    for (int i = 0; i < n; i++) {
        int fill = min(k, progress); 
        cout << fill << " ";
        progress -= fill;
    }
    cout << endl;
    return 0;
}
