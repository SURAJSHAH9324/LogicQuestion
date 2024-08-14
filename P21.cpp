#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = 2 * n - 2 ;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // stars
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // space
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        if(i < n) space = space - 2 ;
        else space += 2;
        cout << endl;
    }
    return 0;
}