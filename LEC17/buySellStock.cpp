#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }
    prefix[0] = arr[0];
    for (int i = 1; i <n; i++)
    {
        prefix[i] = min(prefix[i-1] , arr[i-1]);

    }
    int profit;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        profit = max(arr[i] - prefix[i],0);
        ans = max(ans , profit);
    }
    cout<<ans;
    return 0;
}