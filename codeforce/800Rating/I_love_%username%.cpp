#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int score[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    int best = score[0];
    int worst = score[0];
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (score[i] > best)
        {
            count++;
            best = score[i];
        }
        else if (score[i] < worst)
        {
            count++;
            worst = score[i];
        }
    }

    cout << count;

    return 0;
}