#include <bits/stdc++.h>
using namespace std;
string oddEven(int n) {
       if(n % 2 == 0){
           // even
           return "even";
       }
       else{
           // odd
           return "odd";
       }
}
int main() {
    int n ;
    cout << "Enter a Number " << " => ";
    cin >> n;
    string ans = oddEven(n);
    cout << "the number is " << ans << " ";
    return 0;
}