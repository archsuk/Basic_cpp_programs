#include<iostream>
using namespace std;
long long mod =1e9+7;
long long nc2(int n){
    return n*(n-1)/2;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        ans=(ans%mod+(nc2(a[i])*a[i+1])%mod + (a[i]*nc2(a[i+1])%mod)%mod)%mod;
    }
    
    
    
    return 0;
}