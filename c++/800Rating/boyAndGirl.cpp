#include <iostream>
#include <set>
using namespace std;

int main() {
    string name;
    cin >> name;

    set<char> uniqueChars(name.begin(), name.end());

    if (uniqueChars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
