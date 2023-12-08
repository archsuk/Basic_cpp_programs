#include<iostream>
using namespace std;

int main()
{
     int n ;
    int a_sum = 0;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
        }
        
    
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i]<arr[i-1] && arr[i]<arr[i+1])
        {
           cout<<"valley element: ";
           cout<<arr[i]<<endl;
        } 
    }
    for (int i = 1; i < n-1 ; i++)
    {
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            cout<<"peak element: ";
            cout<<arr[i]<<endl;
        }
        
    }
    return 0;
}