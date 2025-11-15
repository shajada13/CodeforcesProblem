#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[105];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int score_k = a[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= score_k && a[i] > 0)
            count++;
    }

    cout << count << endl;
    return 0;
}
