#include<bits/stdc++.h>
using namespace std;
vector<int>coins;
vector<int>dp;
int cnt = 0;
int solve(int x) {
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;
    if(dp[x] != -1) return dp[x];

    int best = INT_MAX;
    for (auto c : coins) {
        cnt++;
        int res = solve(x-c);
        if(res != INT_MAX) {
            best = min(best, res + 1);
        }
    }
    dp[x] = best;
    return best;
}

int main(){
    int n, i, sum, x;
    cin>>n>>sum;
    for(i=0; i<n; i++){
        cin>>x;
        coins.push_back(x);
    }
    for(i=0; i<=sum; i++) dp.push_back(-1);
    cout<<solve(sum)<<endl;
    cout<<cnt<<endl;
}
