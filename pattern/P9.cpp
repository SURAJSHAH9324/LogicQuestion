#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    for (int i = 0; i < N / 2; i++)
    {
        // spaces
        for (int j = 0; j < (N / 2) - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < (N / 2) - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N / 2; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * N / 2) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}