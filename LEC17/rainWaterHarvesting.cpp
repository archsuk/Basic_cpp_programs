#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int prefix[n] , suffix[n] , ch , ans =0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i]=max(prefix[i-1],arr[i-1]);
    }
    suffix[n-1] = arr[n-1];
    
    for (int i = n-2; i >= 0; i--)
    {
        suffix[i]=max(suffix[i+1],arr[i+1]);
    }
    
    for (int i = 1; i < n-1; i++)
    {
        ch = min(prefix[i] , suffix[i]);
        ans += max(ch-arr[i],0);
    }

    cout<<ans;
    
    return 0;
}