#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        // int x;
        // cin>>x;
        // v.push_back(x);
    }
    for(int x:v) cout<<" "<<x;
    
    return 0;
}