#include<bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin >> N;
    for(int i = N; i >0; i--){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}