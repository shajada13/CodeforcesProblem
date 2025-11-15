#include <iostream>
using namespace std;

int main() {

    string n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }

   
    string c = to_string(count);

    bool isLucky = true;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] != '4' && c[i] != '7') {
            isLucky = false;
            break;
        }
    }

    if (isLucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
