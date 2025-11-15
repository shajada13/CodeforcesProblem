#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') upper++;
        else lower++;
    }

    if (lower > upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;
}
