#include<bits/stdc++.h>
using namespace std;
int PerfectNumberAns(int n){
    int sum  = 1 ;
    for(int i = 2 ; i * i <= n ; i++ ){
        if( n % i == 0){
            sum += i ;
                if(n / i != i) {
                    sum += n / i ;
                }
        }
    }
    return sum;
}
int main(){

    int n;
    cin >> n;
    int ans = PerfectNumberAns(n);
    if(ans == n){
        cout << "Perfect Number";
    }else{
        cout << "Not a Perfect number";
    }
    return 0;
}