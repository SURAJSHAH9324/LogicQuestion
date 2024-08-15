#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 123;
    int rev = 0 , rem ;
    while( n != 0 ){
        rem = n % 10 ;
        rev = (rev * 10) + rem;
        n = n  / 10 ;
    }
    cout << "The Reverse Of number is " << rev ;
    return 0;
}