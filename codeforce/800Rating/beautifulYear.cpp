#include <iostream>
using namespace std;

int year (int d) {
    int d1 = d / 1000;
    int d2 = (d / 100) % 10;
    int d3 = (d / 10) % 10;
    int d4 = d % 10;

    return (d1 != d2 && d1 != d3 && d1 != d4 &&
            d2 != d3 && d2 != d4 &&
            d3 != d4);
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (year(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
