#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, s1;
    getline(cin, s);

    vector<string>v;
    stringstream x(s);

    while(getline(x, s1, ' ')){
        v.push_back(s1);
    }
    cout<<v[v.size()-1]<<endl;
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

/*
    input: My name is Shakib
    output: Shakib
            My name is Shakib
*/
