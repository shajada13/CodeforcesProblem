#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> solved;
        int total = 0;

        for (char c : s) {
            if (solved.find(c) == solved.end()) {
                total += 2; 
                solved.insert(c);
            } else {
                total += 1; 
            }
        }

        cout << total << "\n";
    }

    return 0;
}
