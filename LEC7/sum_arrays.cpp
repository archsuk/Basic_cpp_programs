#include<iostream>
using namespace std;

int main()
{
    // int arr[100];
    // arr[100]=20;
    // cout<<arr[100];
    int n;
    cin>>n;

    int arr[n];
     int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
       
        sum+=arr[i];
        
    }
    cout<<sum;
    
    return 0;
}