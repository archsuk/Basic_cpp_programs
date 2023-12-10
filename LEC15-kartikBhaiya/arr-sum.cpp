#include<iostream>
using namespace std;
int arrSum(int a[] , int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans+=a[i];
    }
    return ans;
    
    
}

int main()
{
    int n; 
    cin>>n;
    int arr[n];
      for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }
    cout<<arrSum(arr , n);
    
    return 0;
}