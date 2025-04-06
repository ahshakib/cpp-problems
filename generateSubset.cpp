#include<bits/stdc++.h>
using namespace std;

void generateSubsets(int i, vector<int> &nums, vector<int> &curr, vector<vector<int>> &res)
{
    if(i == nums.size()){
        res.push_back(curr);
        return;
    }
    generateSubsets(i+1, nums, curr, res);

    curr.push_back(nums[i]);
    generateSubsets(i+1, nums, curr, res);

    curr.pop_back();
}

vector<vector<int>>subset(vector<int> &nums)
{
    vector<vector<int>>result;
    vector<int>curr;
    generateSubsets(0, nums, curr, result);
    return result;
}

int main()
{
    int n, i, j;
    cin>>n;
    vector<int>v(n);
    vector<vector<int>>res;
    for(i=0; i<n; i++) cin>>v[i];
    res = subset(v);
    for(i=0; i<res.size(); i++){
        cout<<"{ ";
        for(j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
}
