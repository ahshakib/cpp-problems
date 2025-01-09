#include<bits/stdc++.h>
using namespace std;
vector<int>coins;
int solve(int x) {
    if (x < 0) return INT_MAX;
    if (x == 0) return 0;
    int best = INT_MAX;
    for (auto c : coins) {
        int res = solve(x-c);
        if(res != INT_MAX) {
            best = min(best, res + 1);
        }
    }
    return best;
}

int main(){
    int n, i, sum, x;
    cin>>n>>sum;
    for(i=0; i<n; i++){
        cin>>x;
        coins.push_back(x);
    }
    cout<<solve(sum)<<endl;
}
