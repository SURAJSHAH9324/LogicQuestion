#include<bits/stdc++.h>
using namespace std;

bool PrimeNumber(int n) {
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(n / i != i){
                cnt++;
            }
        }
    }
    return cnt == 2;
}

int main() {
    int n = 172;
    bool isPrime = PrimeNumber(n);
    cout << (isPrime ? "true" : "false") << endl;
    return 0;
}
