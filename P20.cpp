#include <bits/stdc++.h>
using namespace std;
void printPattern1(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
}
void printPattern2(int n){
    int spaces = 2 * n - 2;
    for(int i = 0; i < n; i++){
        //stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        // spaces
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
        // stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

void pattern(int n){
    printPattern1(n);
    printPattern2(n);
}
int main()
{

    int n;
    cin >> n;
    // printPattern1(n);
    // printPattern2(n);
    pattern(n);
    return 0;
}