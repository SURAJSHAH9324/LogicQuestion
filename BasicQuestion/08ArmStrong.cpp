#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ; // 1 5 3
    cin >> n;
    int temp = n;
    int sum = 0 ;
    while(n != 0){
        int rem = n % 10 ;
        sum = sum + pow(rem,3);
        n = n / 10 ;
    }
    if(sum == temp){
        cout << "Armstrong" ;
    }else{
        cout << "NO" ;
    }

    return 0;
}