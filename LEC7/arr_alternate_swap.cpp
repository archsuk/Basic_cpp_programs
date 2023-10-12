#include<iostream>
using namespace std;

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

    int temp;

    for (int i = 0; i < n-1; i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
     arr[i+1]=temp;
     //arr[i]=(arr[i]+arr[i+1])-(arr[i+1]=arr[i]);
    }
    cout<<endl;
    cout<<"After Swapping"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cout<<arr[i]<<endl;
    }
    
   
    
    return 0;
}