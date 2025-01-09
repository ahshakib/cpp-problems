#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum,i,x;
    cin>>n>>sum;
    vector<int>coins(n);
    vector<int>dp(sum+1, 0);
    for(i=0; i<n; i++) {
        cin>>coins[i];
    }
    for(x=1; x<=sum; x++){
        dp[x] = INT_MAX;
        for(auto c: coins){
            if(x-c >= 0) {
                dp[x] = min(dp[x], dp[x-c]+1);
            }
        }
    }
    cout<<dp[sum]<<endl;;
}
