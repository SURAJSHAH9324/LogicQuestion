#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "3";
    string b = "10";
    int numa = a[a.size() - 1] - '0' ;
    int numb = 0;
    for(int i = 0; i < b.size(); i++){
        numb = ( numb * 10 ) + (b[i] - '0');
        numb = numb % 4 ;
    }
    if(numb % 4 == 0){
        numb = 4;
    }
    int res = pow(numa,numb);
    cout <<(res %  10) ;

    return 0;
}