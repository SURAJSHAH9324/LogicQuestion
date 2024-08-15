#include<bits/stdc++.h>
using namespace std;
// Optimal Approach.
int SqrtNumber(int n)
{
    
    int low = 1 ;
    int high = n ;
    while(low <= high){
        int mid = (low + high) / 2 ;
        if(mid * mid > n){
            high = mid -  1 ;
        }else if(mid * mid <= n){
            low = mid + 1;
        }
    }
    return high;
}

// Brute Force Approach
int BruteForce(int n){
    int ans;
    for(int i = 1; i <= n; i++){
        if(i * i <= n){
            ans = i;
        }else{
            break;
        }
    }
    return ans;
}

int main(){

    int n ;  // 9 => 3
    cin >> n;
    // int ans = SqrtNumber(n);
    int ans = BruteForce(n);
    cout << "The Square Root Number of " << n << " is " << ans;
    return 0;
}