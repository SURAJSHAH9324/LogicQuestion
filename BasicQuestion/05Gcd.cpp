#include<bits/stdc++.h>
using namespace std;

/* LCM =     (  a * b  / gcd(a,b) )     */
// inbuild Function
int InBuiltGcd(int a, int b){
    return __gcd(a,b);
}
// Iterative Function
int IterativeGcd(int a,int b){
    while(a > 0 && b > 0){
        (a > b) ? a = a % b : b = b % a ;
    }
    return (a == 0) ?  b : a ;
}

// Recursive
int RecursiveGcd(int a, int b){
    if(b == 0)
        return a;
    return RecursiveGcd(b, a % b) ;
}
int main(){

    int a, b;
    cin >> a >> b ;
    // int ans = InBuiltGcd(a,b);
    int ans = RecursiveGcd(a,b);
    cout << ans ;
    return 0;
}