#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // n = 5 => [ 0  1  2  3  4]
    cin >> n ;
    for(int i = 0; i < n; i++){

        // Spaces
        for(int j = 0; j <=n - i - 1; j++){
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakPoint = ( 2 * i + 1 )/ 2 ;
        for(int j = 1; j <= 2*i+1; j++){
            cout << ch;
            // if(j <= breakPoint)ch++;
            // else ch--;
            j <= breakPoint? ch++ : ch--;
        }
        // Spaces
        for(int j = 0; j <=n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}