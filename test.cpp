#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto& it:a){
        cin>>it;
    }
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}