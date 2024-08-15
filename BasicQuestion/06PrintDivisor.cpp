#include<bits/stdc++.h>
using namespace std;
vector<int> PrintDivision(int n) {
    vector<int> result;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            result.push_back(i);
                if(n /i != i){
                    result.push_back(n/i);
                }
        }
    }
    return result;
}
int main(){

    int n = 100;
    vector<int> ans = PrintDivision(n);
    sort(ans.begin(), ans.end());
    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}