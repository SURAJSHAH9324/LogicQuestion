#include<bits/stdc++.h>
using namespace std;
int evenlyDivides(int n){
    int temp = n ;
    int cnt = 0 ;
    while ( n > 0 ){
        int rem = n % 10 ;
        if(rem != 0 && temp % rem ==0){
            cnt++;
        }
        n = n / 10 ;
    }
    return cnt;
}
int main(){
    int N = 2446;
    int ans = evenlyDivides(N);
    cout << ans << " i found Answercls ";
    return 0;
}