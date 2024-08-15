#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ; // 1 5 3  => 3 5 1
    cin >> n;
    int temp = n;
    int rev = 0 ;
    while(n != 0){
        int rem = n % 10 ;
        rev = ( rev  *  10 )+ rem;
        n = n / 10 ;
    }
    if(rev == temp){
        cout << "palindrom" ;
    }else{
        cout << "NO" ;
    }

    return 0;
}